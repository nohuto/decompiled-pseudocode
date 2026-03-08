/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C000C820 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001665C (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0016770 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00168B8 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0036A48 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00410D0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedBuffer::RefCountedBufferRelease(PVOID Entry)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Entry + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *(_QWORD *)Entry )
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)Entry, Entry);
    else
      ExFreePoolWithTag(Entry, 0);
  }
}
