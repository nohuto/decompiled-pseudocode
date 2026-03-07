void __fastcall CHolographicInteropTaskQueue::ClearList(CHolographicInteropTaskQueue *this, union _SLIST_HEADER *a2)
{
  CHolographicInteropTaskQueue *v2; // rcx
  PSLIST_ENTRY v3; // rdi
  struct MESSAGE *v4; // rbx

  v3 = InterlockedFlushSList(a2);
  while ( v3 )
  {
    v4 = (struct MESSAGE *)v3;
    v3 = v3->Next;
    CHolographicInteropTaskQueue::ClearMessage(v2, v4);
    operator delete(v4);
  }
}
