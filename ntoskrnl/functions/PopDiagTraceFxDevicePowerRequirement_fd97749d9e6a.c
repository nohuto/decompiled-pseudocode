BOOLEAN __fastcall PopDiagTraceFxDevicePowerRequirement(__int64 a1, char a2, unsigned __int8 a3)
{
  int v3; // esi
  __int64 v4; // r9
  const EVENT_DESCRIPTOR *v5; // rbx
  __int64 v6; // r8
  BOOLEAN result; // al
  REGHANDLE v8; // rdi
  int v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v3 = a3;
  v10 = a1;
  v4 = a3;
  if ( a2 == 1 )
  {
    v5 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_FROM_PEP;
    v6 = 4LL;
  }
  else
  {
    v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
    v6 = 5LL;
  }
  result = PopFxAddLogEntry(a1, 0LL, v6, v4);
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, v5);
    if ( result )
    {
      UserData.Reserved = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v10;
      v9 = v3;
      v12 = &v9;
      UserData.Size = 8;
      v13 = 4;
      return EtwWriteEx(v8, v5, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
