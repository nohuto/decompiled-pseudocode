/*
 * XREFs of VidSchFlushAdapter @ 0x1C0107550
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C01063DC (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00126BC (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0012708 (VidSchiClearFlipDevice.c)
 *     VidSchIsWorkerThread @ 0x1C0014FD0 (VidSchIsWorkerThread.c)
 *     VidSchiGetSchedulerStatus @ 0x1C00189A8 (VidSchiGetSchedulerStatus.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x1C003CB14 (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x1C003CBF4 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003D23C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DB1C (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DBE0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C0046F08 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchResumeAdapter @ 0x1C00AD540 (VidSchResumeAdapter.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00ADCEC (VidSchiWaitFlushCompletion.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C00B7E60 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C0106024 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiHandleControlEvent @ 0x1C01063DC (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0107370 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiBlockDriverCallback @ 0x1C010A3BC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, int a2)
{
  unsigned int v2; // edi
  int v5; // r12d
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v9; // r14
  struct _VIDSCH_GLOBAL *i; // r14
  __int64 v11; // rcx
  _QWORD v12[20]; // [rsp+58h] [rbp-59h] BYREF

  v2 = 0;
  v5 = 0;
  if ( a1 )
  {
    if ( a2 == 17 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 21) && CurrentThread != *((struct _KTHREAD **)a1 + 22) )
        *((_BYTE *)a1 + 3036) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( a2 )
      {
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          v9 = (_DWORD *)((char *)a1 + 3012);
          if ( *((_DWORD *)a1 + 753) == 3 )
          {
            VidSchiBlockDriverCallback(a1);
            *((_DWORD *)a1 + 9) = 23;
            RtlClearAllBitsEx((char *)a1 + 584);
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue((__int64)a1);
          v9 = (_DWORD *)((char *)a1 + 3012);
        }
        if ( a2 == 17 || *v9 == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(a1);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 37);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 296);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice(0LL, (__int64)i - 104);
        }
        VidSchResumeAdapter((__int64)a1, 0);
        VidSchiUnwaitAllContexts((__int64)a1);
        VidSchiClearFlipDevice(a1, 0LL, 9u, 0xFFFFFFFD, 0);
        VidSchiCleanupQueuedCommand((__int64)a1);
        if ( (unsigned int)(*((_DWORD *)a1 + 79) - 2) > 1 )
          VidSchiHandleControlEvent(a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 1025LL) || *(_DWORD *)(*((_QWORD *)a1 + 2) + 200LL) == 6 )
    {
      v5 = VidSchiRequestSchedulerStatus((__int64)a1, 3, 1);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v11, (__int64)a1, a2);
      if ( v5 >= 0 && (a2 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || a2 == 17 )
          VidSchiUnwaitAllContexts((__int64)a1);
        memset(v12, 0, sizeof(v12));
        if ( *((_DWORD *)a1 + 181) )
        {
          LODWORD(v12[4]) |= 0x10u;
          v12[5] = (char *)a1 + 724;
          LODWORD(v12[2]) = 1;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x1Au);
        }
        if ( *((_DWORD *)a1 + 184) )
        {
          memset(v12, 0, sizeof(v12));
          LODWORD(v12[4]) |= 0x10u;
          LODWORD(v12[2]) = 3;
          v12[5] = (char *)a1 + 736;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v12, 0x19u);
        }
        if ( a2 != 5 )
        {
          VidSchiClearFlipDevice(a1, 0LL, 9u, 0xFFFFFFFD, 0);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 219, (_DWORD *)a1 + 184);
        }
      }
    }
    LOBYTE(v2) = a2 == 17;
    _InterlockedOr((volatile signed __int32 *)a1 + 1657, v2);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
