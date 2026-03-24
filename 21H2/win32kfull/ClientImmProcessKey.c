/*
 * XREFs of ClientImmProcessKey @ 0x1C0106F4C
 * Callers:
 *     xxxImmProcessKey @ 0x1C0106C44 (xxxImmProcessKey.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+58h] [rbp-10h]
  int v13; // [rsp+5Ch] [rbp-Ch]
  int v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h]

  v15 = 0LL;
  v14 = 0;
  v10 = 0;
  v13 = 0;
  v8[0] = a1;
  v8[1] = a2;
  v9 = a3;
  v11 = a4;
  v12 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(93LL);
  v5 = KeUserModeCallback(93LL, v8, 40LL, &v15, &v14);
  EtwTraceEndCallback(93LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  if ( v5 < 0 || v14 != 24 )
    return 0LL;
  v6 = (__int64 *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v17 = *v6;
  return result;
}
