BOOLEAN __fastcall PopDiagTraceSessionStateCounted(__int64 a1, __int64 a2, int a3)
{
  BOOLEAN result; // al
  REGHANDLE v4; // rbx
  int v5; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v8; // [rsp+50h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+5Ch] [rbp-24h]
  int *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF

  v14 = a3;
  v5 = -1;
  result = PopGlobalUserPresenceStateTransitions;
  v6 = PopGlobalUserPresenceStateTransitions;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_GLOBAL_INPUT_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      v8 = &v14;
      v11 = &v6;
      v9 = 4;
      v12 = 4;
      return EtwWrite(v4, &POP_ETW_ADPM_GLOBAL_INPUT_STATE, 0LL, 3u, &UserData);
    }
  }
  return result;
}
