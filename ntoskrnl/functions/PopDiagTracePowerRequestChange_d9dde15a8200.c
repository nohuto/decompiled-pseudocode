char __fastcall PopDiagTracePowerRequestChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  __int64 v6; // [rsp+48h] [rbp-19h]
  int v7; // [rsp+50h] [rbp-11h]
  int v8; // [rsp+54h] [rbp-Dh]
  __int64 v9; // [rsp+58h] [rbp-9h]
  int v10; // [rsp+60h] [rbp-1h]
  int v11; // [rsp+64h] [rbp+3h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  __int64 v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  __int64 v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  __int64 v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v25 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST);
    if ( (_BYTE)v1 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      v6 = a1 + 44;
      v9 = a1 + 40;
      v12 = a1 + 48;
      v15 = a1 + 52;
      v18 = a1 + 56;
      v21 = a1 + 60;
      v7 = 4;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      UserData.Size = 8;
      LOBYTE(v1) = EtwWrite(v3, &POP_ETW_EVENT_CHANGE_POWER_REQUEST, 0LL, 7u, &UserData);
    }
  }
  return (char)v1;
}
