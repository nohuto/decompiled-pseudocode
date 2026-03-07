BOOLEAN __fastcall PopDiagTraceFxDeviceStartPowerManagement(__int64 a1)
{
  BOOLEAN result; // al
  char v2; // r9
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v4 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 3, 0LL);
  if ( PopDiagHandleRegistered != v2 )
  {
    v3 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 8;
      return EtwWrite(v3, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT, 0LL, 1u, &UserData);
    }
  }
  return result;
}
