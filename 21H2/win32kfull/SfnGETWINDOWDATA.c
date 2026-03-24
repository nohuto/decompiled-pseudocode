/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C0229430
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ebx
  ULONG64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  int v15; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+4Ch] [rbp-4Ch]
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+68h] [rbp-30h]
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  char v22; // [rsp+A8h] [rbp+10h] BYREF
  int v23; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  v24 = 0LL;
  v23 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16 = 0;
  if ( a1 )
    v9 = *a1;
  else
    v9 = 0LL;
  v14 = v9;
  v15 = a2;
  v17 = a3;
  v18 = a4;
  v19 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v10 = *(_QWORD *)(gpsi + 424LL);
  else
    v10 = *(_QWORD *)(gpsi + 616LL);
  v20 = v10;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(125LL);
  v11 = KeUserModeCallback(125LL, &v14, 48LL, &v24, &v23);
  EtwTraceEndCallback(125LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v21);
  if ( v11 < 0 || v23 != 24 )
    return 0LL;
  v12 = v24;
  if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  return *(_QWORD *)v12;
}
