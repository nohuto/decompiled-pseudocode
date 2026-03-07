void __fastcall PopDiagTraceAdaptiveBootOverride(int a1, char a2)
{
  REGHANDLE v3; // rbx
  BOOL v4; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  BOOL *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]
  int v9; // [rsp+80h] [rbp+8h] BYREF

  v9 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_OVERRIDE_BOOT_STATE) )
    {
      UserData.Size = 4;
      v7 = 4;
      UserData.Reserved = 0;
      v8 = 0;
      v4 = a2 != 0;
      UserData.Ptr = (ULONGLONG)&v9;
      v6 = &v4;
      EtwWriteEx(v3, &POP_ETW_EVENT_ADAPTIVE_OVERRIDE_BOOT_STATE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
