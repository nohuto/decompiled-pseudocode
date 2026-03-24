/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C0227FE8
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C0231A70 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  char v4; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v5[3]; // [rsp+31h] [rbp-87h] BYREF
  int v6; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v8[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v9; // [rsp+90h] [rbp-28h]

  v7[0] = 0LL;
  v6 = 0;
  v8[0] = *(_OWORD *)a1;
  v8[1] = *((_OWORD *)a1 + 1);
  v8[2] = *((_OWORD *)a1 + 2);
  v8[3] = *((_OWORD *)a1 + 3);
  v9 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v4);
  EtwTraceBeginCallback(61LL);
  v1 = KeUserModeCallback(61LL, v8, 72LL, v7, &v6);
  EtwTraceEndCallback(61LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v4);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v5);
  if ( v1 < 0 || v6 != 24 )
    return 0LL;
  v2 = (__int64 *)v7[0];
  if ( (unsigned __int64)(v7[0] + 8LL) < v7[0] || v7[0] + 8LL > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v7[1] = *v2;
  return result;
}
