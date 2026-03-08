/*
 * XREFs of VidSchiRundownUnorderedWaiterGlobal @ 0x1C003C4B0
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003D23C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C003C3E8 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterGlobal(struct HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a2 + 296);
  for ( i = *(_QWORD **)(a2 + 296); i != v3; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterDevice(a1, (__int64)(i - 13), a3);
}
