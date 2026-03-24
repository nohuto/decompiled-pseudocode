/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C022E840
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C012DA10 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
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
  __int64 v22; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-C0h]
  __int64 v25; // [rsp+68h] [rbp-B0h]
  _QWORD v26[3]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+90h] [rbp-88h]
  int v29; // [rsp+94h] [rbp-84h]
  __int64 v30; // [rsp+98h] [rbp-80h]
  __int64 v31; // [rsp+A0h] [rbp-78h]
  __int64 v32; // [rsp+A8h] [rbp-70h]
  __int64 v33; // [rsp+B0h] [rbp-68h]
  __int64 v34; // [rsp+B8h] [rbp-60h]
  __int128 v35; // [rsp+D8h] [rbp-40h]
  char v36; // [rsp+120h] [rbp+8h] BYREF
  char v37; // [rsp+128h] [rbp+10h] BYREF
  __int64 v38; // [rsp+130h] [rbp+18h] BYREF
  int v39; // [rsp+138h] [rbp+20h] BYREF

  v38 = a3;
  v23 = 0LL;
  v39 = 0;
  v26[2] = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v29 = 0;
  v27 = v12;
  v28 = a2;
  if ( (a7 & 1) != 0 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v22 = (unsigned __int16)v38;
      RtlWCSMessageWParamCharToMB(a2, (WCHAR *)&v22);
      v38 = (WORD1(v38) << 16) | (unsigned __int16)v22;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(a2, (WCHAR *)&v38);
    }
  }
  v30 = v38;
  v31 = a4;
  v32 = a5;
  v33 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v26[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v26;
  v26[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v35 = *(_OWORD *)(v14 + 64);
  v24 = v35;
  v25 = *(_QWORD *)(v14 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(2LL);
  v17 = KeUserModeCallback(2LL, &v27, 48LL, &v23, &v39);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v35;
  *(_QWORD *)(v19 + 80) = v25;
  if ( v17 < 0 || v39 != 24 )
    return 0LL;
  v20 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v34 = *v20;
  return result;
}
