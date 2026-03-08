/*
 * XREFs of VidSchiRundownUnorderedWaiterContext @ 0x1C003C39C
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00127D0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 * Callees:
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00366DC (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterContext(struct HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  struct _VIDSCH_QUEUE_PACKET *v6; // rdx

  v3 = (_QWORD *)(a2 + 664);
  v5 = *(_QWORD **)(a2 + 664);
  while ( v5 != v3 )
  {
    v6 = (struct _VIDSCH_QUEUE_PACKET *)(v5 - 4);
    v5 = (_QWORD *)*v5;
    VidSchiRundownUnorderedWaiterPacket(a1, v6, a3);
  }
}
