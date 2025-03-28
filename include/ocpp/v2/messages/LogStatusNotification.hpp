// SPDX-License-Identifier: Apache-2.0
// Copyright 2020 - 2025 Pionix GmbH and Contributors to EVerest
// This code is generated using the generator in 'src/code_generator/common`, please do not edit manually

#ifndef OCPP_V2_LOGSTATUSNOTIFICATION_HPP
#define OCPP_V2_LOGSTATUSNOTIFICATION_HPP

#include <nlohmann/json_fwd.hpp>
#include <optional>

#include <ocpp/common/types.hpp>
#include <ocpp/v2/ocpp_enums.hpp>
#include <ocpp/v2/ocpp_types.hpp>

namespace ocpp {
namespace v2 {

/// \brief Contains a OCPP LogStatusNotification message
struct LogStatusNotificationRequest : public ocpp::Message {
    UploadLogStatusEnum status;
    std::optional<int32_t> requestId;
    std::optional<StatusInfo> statusInfo;
    std::optional<CustomData> customData;

    /// \brief Provides the type of this LogStatusNotification message as a human readable string
    /// \returns the message type as a human readable string
    std::string get_type() const override;
};

/// \brief Conversion from a given LogStatusNotificationRequest \p k to a given json object \p j
void to_json(json& j, const LogStatusNotificationRequest& k);

/// \brief Conversion from a given json object \p j to a given LogStatusNotificationRequest \p k
void from_json(const json& j, LogStatusNotificationRequest& k);

/// \brief Writes the string representation of the given LogStatusNotificationRequest \p k to the given output stream \p
/// os \returns an output stream with the LogStatusNotificationRequest written to
std::ostream& operator<<(std::ostream& os, const LogStatusNotificationRequest& k);

/// \brief Contains a OCPP LogStatusNotificationResponse message
struct LogStatusNotificationResponse : public ocpp::Message {
    std::optional<CustomData> customData;

    /// \brief Provides the type of this LogStatusNotificationResponse message as a human readable string
    /// \returns the message type as a human readable string
    std::string get_type() const override;
};

/// \brief Conversion from a given LogStatusNotificationResponse \p k to a given json object \p j
void to_json(json& j, const LogStatusNotificationResponse& k);

/// \brief Conversion from a given json object \p j to a given LogStatusNotificationResponse \p k
void from_json(const json& j, LogStatusNotificationResponse& k);

/// \brief Writes the string representation of the given LogStatusNotificationResponse \p k to the given output stream
/// \p os \returns an output stream with the LogStatusNotificationResponse written to
std::ostream& operator<<(std::ostream& os, const LogStatusNotificationResponse& k);

} // namespace v2
} // namespace ocpp

#endif // OCPP_V2_LOGSTATUSNOTIFICATION_HPP
