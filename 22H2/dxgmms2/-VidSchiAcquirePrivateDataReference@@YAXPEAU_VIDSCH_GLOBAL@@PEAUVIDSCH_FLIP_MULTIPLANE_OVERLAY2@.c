/*
 * XREFs of ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0006E18
 * Callers:
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035D24 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C00368E8 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C003B4A8 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0042F8C (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C00443B0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C00AD620 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAcquirePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // r8d
  __int64 v4; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
  {
    v4 = *(_QWORD *)((char *)a2 + i * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8) + 200);
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
}
