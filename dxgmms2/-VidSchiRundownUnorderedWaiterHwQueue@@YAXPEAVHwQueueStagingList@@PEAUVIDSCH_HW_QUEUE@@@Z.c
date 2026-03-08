/*
 * XREFs of ?VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003DC54
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003D190 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 * Callees:
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00366DC (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterHwQueue(
        struct HwQueueStagingList *a1,
        struct VIDSCH_HW_QUEUE *a2,
        __int64 a3)
{
  char *v3; // rdi
  char *v5; // rbx
  struct _VIDSCH_QUEUE_PACKET *v6; // rdx

  v3 = (char *)a2 + 160;
  v5 = (char *)*((_QWORD *)a2 + 20);
  while ( v5 != v3 )
  {
    v6 = (struct _VIDSCH_QUEUE_PACKET *)(v5 - 32);
    v5 = *(char **)v5;
    VidSchiRundownUnorderedWaiterPacket(a1, v6, a3);
  }
}
