// SPDX-License-Identifier: Apache-2.0
// Copyright 2020 - 2025 Pionix GmbH and Contributors to EVerest
// This code is generated using the generator in 'src/code_generator/common`, please do not edit manually

#include <ocpp/v2/messages/GetDisplayMessages.hpp>

#include <optional>
#include <ostream>
#include <string>

using json = nlohmann::json;

namespace ocpp {
namespace v2 {

std::string GetDisplayMessagesRequest::get_type() const {
    return "GetDisplayMessages";
}

void to_json(json& j, const GetDisplayMessagesRequest& k) {
    // the required parts of the message
    j = json{
        {"requestId", k.requestId},
    };
    // the optional parts of the message
    if (k.id) {
        j["id"] = json::array();
        for (auto val : k.id.value()) {
            j["id"].push_back(val);
        }
    }
    if (k.priority) {
        j["priority"] = conversions::message_priority_enum_to_string(k.priority.value());
    }
    if (k.state) {
        j["state"] = conversions::message_state_enum_to_string(k.state.value());
    }
    if (k.customData) {
        j["customData"] = k.customData.value();
    }
}

void from_json(const json& j, GetDisplayMessagesRequest& k) {
    // the required parts of the message
    k.requestId = j.at("requestId");

    // the optional parts of the message
    if (j.contains("id")) {
        json arr = j.at("id");
        std::vector<int32_t> vec;
        for (auto val : arr) {
            vec.push_back(val);
        }
        k.id.emplace(vec);
    }
    if (j.contains("priority")) {
        k.priority.emplace(conversions::string_to_message_priority_enum(j.at("priority")));
    }
    if (j.contains("state")) {
        k.state.emplace(conversions::string_to_message_state_enum(j.at("state")));
    }
    if (j.contains("customData")) {
        k.customData.emplace(j.at("customData"));
    }
}

/// \brief Writes the string representation of the given GetDisplayMessagesRequest \p k to the given output stream \p os
/// \returns an output stream with the GetDisplayMessagesRequest written to
std::ostream& operator<<(std::ostream& os, const GetDisplayMessagesRequest& k) {
    os << json(k).dump(4);
    return os;
}

std::string GetDisplayMessagesResponse::get_type() const {
    return "GetDisplayMessagesResponse";
}

void to_json(json& j, const GetDisplayMessagesResponse& k) {
    // the required parts of the message
    j = json{
        {"status", conversions::get_display_messages_status_enum_to_string(k.status)},
    };
    // the optional parts of the message
    if (k.statusInfo) {
        j["statusInfo"] = k.statusInfo.value();
    }
    if (k.customData) {
        j["customData"] = k.customData.value();
    }
}

void from_json(const json& j, GetDisplayMessagesResponse& k) {
    // the required parts of the message
    k.status = conversions::string_to_get_display_messages_status_enum(j.at("status"));

    // the optional parts of the message
    if (j.contains("statusInfo")) {
        k.statusInfo.emplace(j.at("statusInfo"));
    }
    if (j.contains("customData")) {
        k.customData.emplace(j.at("customData"));
    }
}

/// \brief Writes the string representation of the given GetDisplayMessagesResponse \p k to the given output stream \p
/// os \returns an output stream with the GetDisplayMessagesResponse written to
std::ostream& operator<<(std::ostream& os, const GetDisplayMessagesResponse& k) {
    os << json(k).dump(4);
    return os;
}

} // namespace v2
} // namespace ocpp
