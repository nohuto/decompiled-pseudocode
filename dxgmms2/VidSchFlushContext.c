/*
 * XREFs of VidSchFlushContext @ 0x1C00AB850
 * Callers:
 *     VidSchTerminateContext @ 0x1C00A8F80 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C00126BC (VidSchiInterlockedReadUlong.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00127D0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiCancelDelayTimerContext @ 0x1C0012824 (VidSchiCancelDelayTimerContext.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0012910 (VidSchiCleanupDeferredWaiterContext.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00ADCEC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  union _LARGE_INTEGER v9; // [rsp+28h] [rbp-79h]
  _QWORD v10[20]; // [rsp+58h] [rbp-49h] BYREF

  if ( a1 && a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(a1, v5, *a2, a4, v9);
    VidSchiCleanupDeferredWaiterContext(a1);
    memset(v10, 0, sizeof(v10));
    if ( *(_DWORD *)(a1 + 784) )
    {
      v7 = *(_QWORD *)(a1 + 96);
      LODWORD(v10[4]) |= 0x50u;
      LODWORD(v10[2]) = 1;
      v10[5] = a1 + 784;
      LODWORD(v10[6]) = *(unsigned __int16 *)(v7 + 4);
      VidSchiWaitFlushCompletion(v5, v10, 22LL);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v5 + 1728), (_DWORD *)(a1 + 784));
    if ( *(_DWORD *)(a1 + 792) )
    {
      memset(v10, 0, sizeof(v10));
      LODWORD(v10[4]) |= 0x10u;
      LODWORD(v10[2]) = 3;
      v10[5] = a1 + 792;
      VidSchiWaitFlushCompletion(v5, v10, 22LL);
    }
    VidSchiCancelDelayTimerContext(0LL, (struct _KTIMER *)a1);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
}
