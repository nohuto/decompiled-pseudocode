/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CDBE
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC2E (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0044060 (VidSchCreateHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0044510 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044980 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0044F60 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0085F20 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014268 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C00142EC (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 */

void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rdi
  _QWORD *v6; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  WdLogSingleEntry2(4LL, a2, a1);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  v5 = (KSPIN_LOCK *)(v4 + 1736);
  *((_DWORD *)a2 + 13) = 0;
  VidSchiInterlockedRemoveEntryList(v5, (_QWORD *)a2 + 1, (_DWORD *)a1 + 64);
  VidSchiInterlockedInsertTailList(v5, (__int64)a1 + 216, (_QWORD *)a2 + 1, (_DWORD *)a1 + 58);
  while ( 1 )
  {
    v6 = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v5, (_QWORD **)a1 + 27, (_DWORD *)a1 + 58);
    if ( !v6 )
      break;
    ExFreePoolWithTag(v6 - 1, 0);
  }
}
