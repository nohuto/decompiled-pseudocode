void __fastcall VidSchiRundownUnorderedWaiterGlobal(struct HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a2 + 296);
  for ( i = *(_QWORD **)(a2 + 296); i != v3; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterDevice(a1, (__int64)(i - 13), a3);
}
