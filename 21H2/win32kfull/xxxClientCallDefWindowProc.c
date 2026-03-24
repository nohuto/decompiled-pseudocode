/*
 * XREFs of xxxClientCallDefWindowProc @ 0x1C0231770
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallDefWindowProc(__int64 *a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp-40h] BYREF
  int v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+44h] [rbp-34h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+64h] [rbp-14h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+88h] [rbp+10h] BYREF
  int v14; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 0;
  v6 = 0;
  v11 = 0;
  v4 = *a1;
  v5 = *((_DWORD *)a1 + 2);
  v7 = a1[2];
  v8 = a1[3];
  v9 = *((_DWORD *)a1 + 8);
  v10 = *(__int64 *)((char *)a1 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(128LL);
  v1 = KeUserModeCallback(128LL, &v4, 48LL, &v15, &v14);
  EtwTraceEndCallback(128LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v13);
  if ( v1 < 0 || v14 != 24 )
    return 0LL;
  v2 = (__int64 *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v12 = *v2;
  return result;
}
