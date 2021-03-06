//
//  Enums.h
//  permission_handler
//
//  Created by Razvan Lung on 15/02/2019.
//

typedef NS_ENUM(int, PermissionGroup) {
    // PermissionGroupCalendar = 0,
    // PermissionGroupCamera,
    // PermissionGroupContacts,
    // PermissionGroupLocation,
    // PermissionGroupLocationAlways,
    // PermissionGroupLocationWhenInUse,
    // PermissionGroupMediaLibrary,
    PermissionGroupMicrophone = 0,
    // PermissionGroupPhone,
    // PermissionGroupPhotos,
    // PermissionGroupReminders,
    // PermissionGroupSensors,
    // PermissionGroupSms,
    // PermissionGroupSpeech,
    PermissionGroupStorage = 1,
    PermissionGroupUnknown = 2,
};

typedef NS_ENUM(int, PermissionStatus) {
    PermissionStatusDenied = 0,
    PermissionStatusDisabled,
    PermissionStatusGranted,
    PermissionStatusRestricted,
    PermissionStatusUnknown,
};

typedef NS_ENUM(int, ServiceStatus) {
    ServiceStatusDisabled = 0,
    ServiceStatusEnabled,
    ServiceStatusNotApplicable,
    ServiceStatusUnknown,
};
