/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C0227360
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
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
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  ULONG64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v28; // [rsp+68h] [rbp-110h]
  __int128 v29; // [rsp+98h] [rbp-E0h]
  __int128 v30; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-C0h]
  __m128i v32; // [rsp+C0h] [rbp-B8h]
  volatile void *Address; // [rsp+D0h] [rbp-A8h]
  __int64 v34; // [rsp+E0h] [rbp-98h] BYREF
  int v35; // [rsp+E8h] [rbp-90h]
  int v36; // [rsp+ECh] [rbp-8Ch]
  __int64 v37; // [rsp+F0h] [rbp-88h]
  __int128 v38; // [rsp+F8h] [rbp-80h]
  __int128 v39; // [rsp+108h] [rbp-70h]
  __int64 v40; // [rsp+118h] [rbp-60h]
  __int64 v41; // [rsp+120h] [rbp-58h]
  __m128i v42; // [rsp+130h] [rbp-48h]
  volatile void *v43; // [rsp+140h] [rbp-38h]
  int v44; // [rsp+180h] [rbp+8h] BYREF
  char v45; // [rsp+188h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+190h] [rbp+18h] BYREF

  v46 = 0LL;
  v44 = 0;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v36 = 0;
  v34 = v14;
  v35 = a2;
  v37 = a3;
  v38 = *a4;
  v39 = a4[1];
  v40 = a5;
  v41 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v30);
  v15 = *(_QWORD *)(v13 + 480);
  v29 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(102LL);
  v18 = KeUserModeCallback(102LL, &v34, 72LL, &v46, &v44);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v29;
  *(_QWORD *)(v22 + 80) = v28;
  if ( v18 >= 0 && v44 == 24 )
  {
    v23 = (__int64 *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = v46;
    if ( v46 + 24 < v46 || v46 + 24 > MmUserProbeAddress )
      v25 = MmUserProbeAddress;
    v32 = *(__m128i *)v25;
    Address = *(volatile void **)(v25 + 16);
    v42 = v32;
    v43 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) == 8 )
    {
      v26 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v26;
      return v24;
    }
  }
  return 0LL;
}
