char __fastcall PopDiagTraceSystemIdleContextUpdate(int a1, int a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-21h] BYREF
  int *v9; // [rsp+48h] [rbp-11h]
  int v10; // [rsp+50h] [rbp-9h]
  int v11; // [rsp+54h] [rbp-5h]
  int *v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+64h] [rbp+Bh]
  int *v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+74h] [rbp+1Bh]
  char *v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+84h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v22; // [rsp+B8h] [rbp+5Fh] BYREF
  int v23; // [rsp+C0h] [rbp+67h] BYREF
  int v24; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v25 = a4;
  v24 = a3;
  v23 = a2;
  v22 = a1;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_CONTEXT_UPDATE);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      UserData.Ptr = (ULONGLONG)&v22;
      v9 = &v23;
      UserData.Size = 4;
      v12 = &v24;
      v15 = &v25;
      v18 = &a5;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      LOBYTE(v5) = EtwWrite(v6, &POP_ETW_EVENT_SYSTEM_IDLE_CONTEXT_UPDATE, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
