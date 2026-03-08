/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1407118C4
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x1407111A4 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 *     ObpIncrPointerCount @ 0x14033BAEC (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 *     ExpGetHandleExtraInfo @ 0x1408A6B3A (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  unsigned __int64 HandlePointer; // rax
  unsigned int v15; // r8d
  volatile signed __int64 *v16; // r15
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  bool v22; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v24[14]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = a1;
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_2;
  if ( a1 == -1LL )
  {
    *a7 = 0;
    v22 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a8 = 0LL;
    if ( !v22 )
      ObpPushStackInfo((__int64)&a2[-1].SystemAffinityTokenListHead, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&a2[-1].SystemAffinityTokenListHead);
    *a6 = a2;
    return 0LL;
  }
  if ( a1 == -2LL )
  {
    *a7 = 0;
    v22 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a8 = 0LL;
    if ( !v22 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].SystemAffinityTokenListHead, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead);
    *a6 = CurrentThread;
    return 0LL;
  }
  if ( !a4 )
  {
    a3 = ObpKernelHandleTable;
    v11 = a1 ^ 0xFFFFFFFF80000000uLL;
LABEL_2:
    --CurrentThread->KernelApcDisable;
    v12 = (__int64 *)ExMapHandleToPointer(a3, v11);
    v13 = v12;
    if ( v12 )
    {
      HandlePointer = ExGetHandlePointer(v12);
      v15 = *((_DWORD *)v13 + 2);
      v16 = (volatile signed __int64 *)HandlePointer;
      v17 = v15 & 0x1FFFFFF;
      if ( *(_DWORD *)(a3 + 4)
        && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v11), v15 = *((_DWORD *)v13 + 2), HandleExtraInfo) )
      {
        v18 = *HandleExtraInfo;
      }
      else
      {
        v18 = 0LL;
      }
      *a8 = v18;
      v19 = ((__int64)*(unsigned int *)v13 >> 17) & 7;
      a7[1] = v17;
      v20 = v19 | 8;
      if ( (v15 & 0x2000000) == 0 )
        v20 = v19;
      *a7 = v20;
      ObpIncrPointerCount(v16);
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v24, 0);
      if ( *(_QWORD *)(a3 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)v16, 1, 1u, a5);
      *a6 = (struct _KTHREAD *)(v16 + 6);
      return 0LL;
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return 3221225480LL;
}
