/*
 * XREFs of ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001523C
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0014F38 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C00368E8 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0042F8C (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1C001ABC0 (memset.c)
 */

void __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(_VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  _DWORD *v1; // rdi

  v1 = (_DWORD *)*((_QWORD *)this + 147);
  memset(this, 0, 0x568uLL);
  *((_QWORD *)this + 147) = v1;
  memset(v1 + 4, 0, v1[1] * ((v1[2] << 6) + ((8 * v1[2] + 231) & 0xFFFFFFF8)));
}
