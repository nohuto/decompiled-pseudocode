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
