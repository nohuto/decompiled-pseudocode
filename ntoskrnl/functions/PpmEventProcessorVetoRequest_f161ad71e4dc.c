char __fastcall PpmEventProcessorVetoRequest(__int64 a1, int a2, int a3, char a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  REGHANDLE v7; // rdi
  __int16 v8; // ax
  __int16 v10; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  __int64 v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  int *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int v21; // [rsp+D0h] [rbp+6Fh] BYREF
  int v22; // [rsp+D8h] [rbp+77h] BYREF

  v22 = a3;
  v21 = a2;
  v4 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  v5 = (const EVENT_DESCRIPTOR *)PPM_ETW_PROCESSOR_IDLE_VETO_DECREMENT;
  if ( a4 )
    v5 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    v7 = PpmEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, v5);
    if ( (_BYTE)v4 )
    {
      v8 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v10 = v8;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = a1 + 209;
      v15 = &v21;
      v18 = &v22;
      v16 = 4;
      v19 = 4;
      UserData.Size = 2;
      v13 = 1;
      LOBYTE(v4) = EtwWriteEx(v7, v5, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
