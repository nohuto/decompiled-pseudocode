NTSTATUS __fastcall IopDevObjApplyPostCreationSettings(
        _DEVICE_OBJECT *DeviceObject,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  NTSTATUS result; // eax
  int v5; // edx
  ACCESS_MASK v6; // r9d
  NTSTATUS v7; // ebx
  unsigned __int8 fromDefaultSource; // [rsp+58h] [rbp+10h] BYREF
  unsigned int securityInformation; // [rsp+60h] [rbp+18h] BYREF
  void *handle; // [rsp+68h] [rbp+20h] BYREF

  securityInformation = 0;
  handle = 0LL;
  fromDefaultSource = 0;
  if ( (StackCreationSettings->Flags & 2) == 0 )
    return 0;
  result = SeUtilSecurityInfoFromSecurityDescriptor(
             StackCreationSettings->SecurityDescriptor,
             &fromDefaultSource,
             &securityInformation);
  if ( result >= 0 )
  {
    v5 = ((securityInformation & 3) != 0 ? 0x80000 : 0) | 0x40000;
    if ( (securityInformation & 4) == 0 )
      v5 = (securityInformation & 3) != 0 ? 0x80000 : 0;
    v6 = v5 | 0x1000000;
    if ( (securityInformation & 8) == 0 )
      v6 = v5;
    result = ObOpenObjectByPointer(DeviceObject, 0x200u, 0LL, v6, (POBJECT_TYPE)IoDeviceObjectType, 0, &handle);
    if ( result >= 0 )
    {
      v7 = ZwSetSecurityObject(handle, securityInformation, StackCreationSettings->SecurityDescriptor);
      ZwClose(handle);
      return v7;
    }
  }
  return result;
}
