BOOLEAN __fastcall PopDiagTraceFxDevicePowerState(__int64 a1, int a2)
{
  char v2; // bl
  BOOLEAN result; // al
  REGHANDLE v4; // rdi
  char v5; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  char *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v6 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 6LL, a2);
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 8;
      v8 = &v5;
      v5 = v2 - 1;
      v9 = 1;
      return EtwWriteEx(v4, &POP_ETW_EVENT_DEVICE_POWER_STATE, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
