/*
 * XREFs of EtwTraceSingleDpcSoftTimeout @ 0x1405FB148
 * Callers:
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x140568EC0 (KiLogSingleDpcSoftTimeoutEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceSingleDpcSoftTimeout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int16 *a6)
{
  unsigned __int16 v6; // ax
  NTSTATUS result; // eax
  __int16 v8; // [rsp+40h] [rbp-49h] BYREF
  int v9; // [rsp+44h] [rbp-45h] BYREF
  int v10; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v12; // [rsp+60h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-21h]
  int *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  int *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  char *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  __int16 *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  __int64 v25; // [rsp+E8h] [rbp+5Fh] BYREF
  int v26; // [rsp+F8h] [rbp+6Fh] BYREF

  v26 = a4;
  v25 = a2;
  if ( EtwCpuStarvationProvRegHandle )
  {
    v10 = *(_DWORD *)(a3 + 36);
    v9 = *(_DWORD *)(a1 + 1232);
    *(_QWORD *)&UserData.Size = 8LL;
    v13 = 4LL;
    v6 = *a6;
    v23 = *a6;
    v8 = v6 >> 1;
    UserData.Ptr = (ULONGLONG)&v25;
    v12 = &v9;
    v14 = &v10;
    v16 = &v26;
    v18 = &a5;
    v20 = &v8;
    v22 = *((_QWORD *)a6 + 1);
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 2LL;
    v24 = 0;
    return EtwWriteEx(
             EtwCpuStarvationProvRegHandle,
             &CPU_STARVATION_EVENT_SINGLE_DPC_SOFT_TIMEOUT,
             0LL,
             0,
             0LL,
             0LL,
             7u,
             &UserData);
  }
  return result;
}
