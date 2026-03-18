/*
 * XREFs of ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0016890
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001677C (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035D24 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C00368E8 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C00416F4 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0042F8C (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BDDE (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall VidSchiReleasePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rbp
  void *v6; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
  {
    v5 = i * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
    v6 = *(void **)((char *)a2 + v5 + 200);
    if ( v6 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v6);
      *(_QWORD *)((char *)a2 + v5 + 200) = 0LL;
    }
  }
}
