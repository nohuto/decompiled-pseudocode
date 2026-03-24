/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C022CE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  ULONG64 v24; // rcx
  _QWORD *v25; // rbx
  __int64 v27; // [rsp+68h] [rbp-120h]
  _QWORD v28[8]; // [rsp+70h] [rbp-118h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-D8h]
  __m128i v30; // [rsp+C0h] [rbp-C8h]
  volatile void *Address; // [rsp+D0h] [rbp-B8h]
  __int64 v32; // [rsp+E0h] [rbp-A8h] BYREF
  int v33; // [rsp+E8h] [rbp-A0h]
  int v34; // [rsp+ECh] [rbp-9Ch]
  __int64 v35; // [rsp+F0h] [rbp-98h]
  __int128 v36; // [rsp+F8h] [rbp-90h]
  __int128 v37; // [rsp+108h] [rbp-80h]
  __int64 v38; // [rsp+118h] [rbp-70h]
  __int64 v39; // [rsp+120h] [rbp-68h]
  __m128i v40; // [rsp+130h] [rbp-58h]
  volatile void *v41; // [rsp+140h] [rbp-48h]
  char v42; // [rsp+190h] [rbp+8h] BYREF
  char v43; // [rsp+198h] [rbp+10h] BYREF
  int v44; // [rsp+1A0h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+1A8h] [rbp+20h] BYREF

  v45 = 0LL;
  v44 = 0;
  v28[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v34 = 0;
  v32 = v14;
  v33 = a2;
  v35 = a3;
  v36 = *a4;
  v37 = a4[1];
  v38 = a5;
  v39 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v28;
  v28[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v29 = *(_OWORD *)(v16 + 64);
  v27 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(102LL);
  v19 = KeUserModeCallback(102LL, &v32, 72LL, &v45, &v44);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v29;
  *(_QWORD *)(v21 + 80) = v27;
  if ( v19 >= 0 && v44 == 24 )
  {
    v22 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v28[3] = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = v45;
    if ( v45 + 24 < v45 || v45 + 24 > MmUserProbeAddress )
      v24 = MmUserProbeAddress;
    v30 = *(__m128i *)v24;
    Address = *(volatile void **)(v24 + 16);
    v40 = v30;
    v41 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v30, 8)) == 8 )
    {
      v25 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v25;
      return v23;
    }
  }
  return 0LL;
}
