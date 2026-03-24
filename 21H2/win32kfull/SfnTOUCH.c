/*
 * XREFs of SfnTOUCH @ 0x1C0230620
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnTOUCH(__int64 *a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 result; // rax
  _BYTE v22[4]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v23[5]; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+68h] [rbp-A0h]
  _QWORD v27[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+94h] [rbp-74h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  __int64 v35; // [rsp+B8h] [rbp-50h]
  __int128 v36; // [rsp+D8h] [rbp-30h]
  char v37; // [rsp+110h] [rbp+8h] BYREF

  v24 = 0LL;
  v23[0] = 0;
  v27[2] = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v30 = 0;
  if ( !HMValidateHandle(a4, 0x14u) )
    return 0LL;
  v28 = v12;
  v29 = a2;
  v31 = a3;
  v32 = a4;
  v33 = a5;
  v34 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v27;
  v27[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v36 = *(_OWORD *)(v14 + 64);
  v25 = v36;
  v26 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v22);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(112LL);
  v17 = KeUserModeCallback(112LL, &v28, 48LL, &v24, v23);
  EtwTraceEndCallback(112LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v22);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v36;
  *(_QWORD *)(v19 + 80) = v26;
  if ( v17 < 0 || v23[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v24;
  if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v35 = *v20;
  return result;
}
