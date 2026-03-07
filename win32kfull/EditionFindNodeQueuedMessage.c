struct tagQMSG *__fastcall EditionFindNodeQueuedMessage(__int64 a1, __int64 a2, __int64 a3, struct tagQ **a4)
{
  struct tagQ *v4; // rcx

  v4 = *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 432LL);
  if ( v4 )
    return FindNodeQueuedMessageWorker(v4, a2, a3, a4);
  else
    return 0LL;
}
