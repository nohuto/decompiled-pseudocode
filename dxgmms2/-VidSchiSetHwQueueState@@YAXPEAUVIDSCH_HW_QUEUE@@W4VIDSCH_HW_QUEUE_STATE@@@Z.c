/*
 * XREFs of ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C001D4C6
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C63A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC2E (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CEE2 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0042D18 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D0BE (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D1A2 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchiSetHwQueueState(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 124);
  if ( v2 != a2 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    switch ( a2 )
    {
      case 0:
        goto LABEL_5;
      case 1:
        if ( !*(_BYTE *)(v5 + 92) )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)a1);
        break;
      case 2:
LABEL_5:
        if ( v2 == 1 && !*(_BYTE *)(v5 + 92) )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)a1);
        break;
    }
    *(_DWORD *)(a1 + 124) = a2;
  }
}
