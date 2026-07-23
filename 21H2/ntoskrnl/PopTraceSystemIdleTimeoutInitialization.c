/*
 * XREFs of PopTraceSystemIdleTimeoutInitialization @ 0x14078CE38
 * Callers:
 *     PopInitSIdle @ 0x14078CC68 (PopInitSIdle.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopTraceSystemIdleTimeoutInitialization(
        unsigned __int8 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  _UNKNOWN **v7; // rax
  int v8; // edi
  REGHANDLE v9; // rbx
  int v11; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-51h] BYREF
  int *v13; // [rsp+58h] [rbp-41h]
  int v14; // [rsp+60h] [rbp-39h]
  int v15; // [rsp+64h] [rbp-35h]
  int *v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+74h] [rbp-25h]
  int *v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+84h] [rbp-15h]
  char *v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+94h] [rbp-5h]
  char *v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A4h] [rbp+Bh]
  char *v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+47h] BYREF
  int v32; // [rsp+F0h] [rbp+57h] BYREF
  int v33; // [rsp+F8h] [rbp+5Fh] BYREF
  int v34; // [rsp+100h] [rbp+67h] BYREF

  v7 = &retaddr;
  v34 = a4;
  v33 = a3;
  v32 = a2;
  v8 = a1;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    LOBYTE(v7) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIMEOUT_INITIALIZED);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      v13 = &v32;
      v16 = &v33;
      v19 = &v34;
      v22 = &a5;
      v25 = &a6;
      v28 = &a7;
      UserData.Size = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v11 = v8;
      LOBYTE(v7) = EtwWrite(v9, &POP_ETW_EVENT_SYSTEM_IDLE_TIMEOUT_INITIALIZED, 0LL, 7u, &UserData);
    }
  }
  return (char)v7;
}
