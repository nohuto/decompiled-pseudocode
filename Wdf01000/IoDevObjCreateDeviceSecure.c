NTSTATUS __fastcall IoDevObjCreateDeviceSecure(
        _DRIVER_OBJECT *DriverObject,
        unsigned int DeviceExtensionSize,
        _UNICODE_STRING *DeviceName,
        unsigned int DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        const _UNICODE_STRING *DefaultSDDLString,
        const _GUID *DeviceClassGuid,
        _DEVICE_OBJECT **DeviceObject)
{
  _DEVICE_OBJECT **v9; // r14
  ULONG Characteristics; // r15d
  NTSTATUS result; // eax
  char Flags; // si
  NTSTATUS Device; // ebx
  ULONG v16; // r9d
  BOOLEAN Exclusivity; // cl
  STACK_CREATION_SETTINGS stackSettings; // [rsp+40h] [rbp-30h] BYREF
  STACK_CREATION_SETTINGS updateSettings; // [rsp+58h] [rbp-18h] BYREF
  void *securityDescriptor; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+58h]

  v22 = DeviceType;
  v9 = DeviceObject;
  Characteristics = DeviceCharacteristics;
  securityDescriptor = 0LL;
  *(_QWORD *)&stackSettings.Characteristics = 0LL;
  *DeviceObject = 0LL;
  DeviceObject = 0LL;
  *(_OWORD *)&stackSettings.Flags = 0LL;
  if ( !DeviceName && (Characteristics & 0x80u) == 0 )
    return -1073741811;
  if ( !DeviceClassGuid
    || (result = PpRegStateReadCreateClassCreationSettings(DeviceClassGuid, DriverObject, &stackSettings), result >= 0) )
  {
    Flags = stackSettings.Flags;
    if ( (stackSettings.Flags & 2) != 0 )
      goto LABEL_10;
    Device = SeSddlSecurityDescriptorFromSDDL(DefaultSDDLString, DeviceExtensionSize, &securityDescriptor);
    if ( Device >= 0 )
    {
      Flags = 2;
      stackSettings.Flags = 2;
      stackSettings.SecurityDescriptor = securityDescriptor;
      if ( !DeviceClassGuid
        || (*(_QWORD *)&updateSettings.Flags = 2LL,
            *(_QWORD *)&updateSettings.Characteristics = 0LL,
            updateSettings.SecurityDescriptor = securityDescriptor,
            Device = PpRegStateUpdateStackCreationSettings(DeviceClassGuid, &updateSettings),
            Device >= 0) )
      {
LABEL_10:
        v16 = v22;
        Exclusivity = Exclusive;
        if ( (stackSettings.Flags & 1) != 0 )
          v16 = stackSettings.DeviceType;
        if ( (stackSettings.Flags & 4) != 0 )
          Characteristics = stackSettings.Characteristics;
        if ( (stackSettings.Flags & 8) != 0 )
          Exclusivity = stackSettings.Exclusivity;
        Device = IoCreateDevice(
                   DriverObject,
                   DeviceExtensionSize,
                   DeviceName,
                   v16,
                   Characteristics,
                   Exclusivity,
                   (PDEVICE_OBJECT *)&DeviceObject);
        if ( Device >= 0 )
        {
          Device = IopDevObjApplyPostCreationSettings((_DEVICE_OBJECT *)DeviceObject, &stackSettings);
          if ( Device >= 0 )
            *v9 = (_DEVICE_OBJECT *)DeviceObject;
          else
            IoDeleteDevice((PDEVICE_OBJECT)DeviceObject);
        }
      }
    }
    if ( (Flags & 2) != 0 )
      ExFreePoolWithTag(stackSettings.SecurityDescriptor, 0);
    return Device;
  }
  return result;
}
