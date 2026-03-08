/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C003A0D4
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0047148 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiForceTdr @ 0x1C00473F4 (VidSchiForceTdr.c)
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C000AA50 (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DBB6 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002DBD8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C003B0C4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0041814 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00455A0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0045608 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0045F04 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 */

void __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // rbp
  PSLIST_ENTRY v5; // rax
  _QWORD *v6; // rbx
  _QWORD *p_Next; // r8
  struct _SLIST_ENTRY *v8; // rdi
  unsigned int Next; // ecx
  struct _SLIST_ENTRY *v10; // rsi
  int v11; // eax
  struct _VIDSCH_VSYNC_COOKIE *v12; // rcx

  v2 = *(union _SLIST_HEADER **)(a1 + 744);
  v5 = ExpInterlockedFlushSList(v2 + 111);
  v6 = 0LL;
  if ( v5 )
  {
    do
    {
      p_Next = &v5->Next;
      v5 = v5->Next;
      *p_Next = v6;
      v6 = p_Next;
    }
    while ( v5 );
    do
    {
      v8 = (struct _SLIST_ENTRY *)(v6 - 2);
      v6 = (_QWORD *)*v6;
      Next = (unsigned int)v8->Next;
      if ( ((LODWORD(v8->Next) - 1) & 0xFFFFFFF6) != 0 || Next == 10 )
      {
        switch ( Next )
        {
          case 0xBu:
            VidSchiProcessMonitoredFenceSignaledDpc(v8);
            break;
          case 0xFu:
            v10 = v8[2].Next;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&v10[378], v8);
            if ( (byte_1C00769C3 & 2) != 0 )
              VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)v10);
            break;
          case 0x10u:
            VidSchiProcessGpuEngineTimeoutDpc(v8);
            break;
          case 0xCu:
            VidSchiProcessHwQueuePageFaultedDpc(v8);
            break;
          case 0x11u:
            VidSchiProcessSuspendContextCompletedDpc(v8);
            break;
          default:
            if ( Next <= 0x12 && (v11 = 263304, _bittest(&v11, Next)) )
            {
              v12 = (struct _VIDSCH_VSYNC_COOKIE *)&v8[-1];
              if ( *((_BYTE *)&v8[2].Next[3].Next + 11) )
                VidSchiProcessDpcVSyncHwFlipQueue(v12);
              else
                VidSchiProcessDpcVSyncCookie(v12);
              ExpInterlockedPushEntrySList(
                (PSLIST_HEADER)(*(&v2[200].Alignment + *((unsigned int *)&v8[5].Next + 3)) + 44688),
                v8);
            }
            else if ( Next == 14 )
            {
              VidSchiProcessPeriodicNotificationCookie((struct _VIDSCH_GLOBAL *)v2);
            }
            break;
        }
      }
      else
      {
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v8[2].Next[6].Next[30].Next + 2, 1);
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 768), 1u);
        }
        VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v8[-1]);
      }
    }
    while ( v6 );
  }
}
