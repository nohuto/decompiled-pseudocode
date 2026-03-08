/*
 * XREFs of PopDiagTraceIdleCheck @ 0x140591810
 * Callers:
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  int v6; // [rsp+48h] [rbp-49h] BYREF
  int v7; // [rsp+50h] [rbp-41h] BYREF
  BOOL v8; // [rsp+54h] [rbp-3Dh] BYREF
  BOOL v9; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  int *v11; // [rsp+78h] [rbp-19h]
  __int64 v12; // [rsp+80h] [rbp-11h]
  int *v13; // [rsp+88h] [rbp-9h]
  __int64 v14; // [rsp+90h] [rbp-1h]
  int *v15; // [rsp+98h] [rbp+7h]
  __int64 v16; // [rsp+A0h] [rbp+Fh]
  int *v17; // [rsp+A8h] [rbp+17h]
  __int64 v18; // [rsp+B0h] [rbp+1Fh]
  BOOL *v19; // [rsp+B8h] [rbp+27h]
  __int64 v20; // [rsp+C0h] [rbp+2Fh]
  BOOL *v21; // [rsp+C8h] [rbp+37h]
  __int64 v22; // [rsp+D0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
  int v24; // [rsp+100h] [rbp+6Fh] BYREF
  int v25; // [rsp+108h] [rbp+77h] BYREF

  v3 = &retaddr;
  v25 = a3;
  v24 = a2;
  v6 = 0;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IDLE_CHECK);
    if ( (_BYTE)v3 )
    {
      v7 = 0;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = dword_140C3C988 >= (unsigned int)dword_140C3C98C;
      v12 = 4LL;
      v9 = dword_140C03588 != 0;
      v14 = 4LL;
      UserData.Ptr = (ULONGLONG)&v6;
      v16 = 4LL;
      v11 = &v24;
      v13 = &v25;
      v15 = &dword_140C3C988;
      v17 = &v7;
      v19 = &v8;
      v21 = &v9;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      LOBYTE(v3) = EtwWriteEx(v4, &POP_ETW_EVENT_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v3;
}
