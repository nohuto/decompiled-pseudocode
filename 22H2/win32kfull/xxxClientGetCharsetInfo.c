/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C012FE28
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C012FD70 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  char v10; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-67h] BYREF
  int v12; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-60h] BYREF
  int v14; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+5Ch] [rbp-3Ch]
  __int128 v16; // [rsp+6Ch] [rbp-2Ch]

  v13[0] = 0LL;
  v12 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v14 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  EtwTraceBeginCallback(69LL);
  v3 = KeUserModeCallback(69LL, &v14, 36LL, v13, &v12);
  EtwTraceEndCallback(69LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v11);
  if ( v3 < 0 || v12 != 24 )
    return 0LL;
  v4 = (__int64 *)v13[0];
  if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || v13[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  v5 = *v4;
  v13[1] = *v4;
  v6 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 84) & 1) != 0 && *(_OWORD **)(v6 + 96) == a2 )
      return 0LL;
  }
  v7 = *(_OWORD **)(v13[0] + 16LL);
  if ( v7 + 2 < v7 || (unsigned __int64)(v7 + 2) > MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  v8 = v7[1];
  *a2 = *v7;
  a2[1] = v8;
  return (unsigned int)v5;
}
