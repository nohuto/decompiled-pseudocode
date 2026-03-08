/*
 * XREFs of VidSchiRundownUnorderedWaiterDevice @ 0x1C003C3E8
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0012668 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiRundownUnorderedWaiterGlobal @ 0x1C003C4B0 (VidSchiRundownUnorderedWaiterGlobal.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DB1C (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00366DC (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterDevice(struct HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  _QWORD *v7; // r14
  _QWORD **v8; // r14
  _QWORD *v9; // rdi
  struct _VIDSCH_QUEUE_PACKET *v10; // rdx
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  _QWORD **v14; // r14
  _QWORD *v15; // rdi
  _QWORD *v16; // rbp
  _QWORD **v17; // rbp
  _QWORD *v18; // r15
  struct _VIDSCH_QUEUE_PACKET *v19; // rdx

  v3 = (_QWORD *)(a2 + 72);
  v5 = *(_QWORD **)(a2 + 72);
  while ( v5 != v3 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = (_QWORD **)(v7 + 80);
    v9 = *v8;
    while ( v9 != v8 )
    {
      v10 = (struct _VIDSCH_QUEUE_PACKET *)(v9 - 4);
      v9 = (_QWORD *)*v9;
      VidSchiRundownUnorderedWaiterPacket(a1, v10, a3);
    }
  }
  v11 = (_QWORD *)(a2 + 88);
  v12 = *(_QWORD **)(a2 + 88);
  while ( v12 != v11 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
    v14 = (_QWORD **)(v13 + 4);
    v15 = *v14;
    while ( v15 != v14 )
    {
      v16 = v15;
      v15 = (_QWORD *)*v15;
      v17 = (_QWORD **)(v16 + 19);
      v18 = *v17;
      while ( v18 != v17 )
      {
        v19 = (struct _VIDSCH_QUEUE_PACKET *)(v18 - 4);
        v18 = (_QWORD *)*v18;
        VidSchiRundownUnorderedWaiterPacket(a1, v19, a3);
      }
    }
  }
}
