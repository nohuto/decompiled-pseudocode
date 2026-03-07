struct _SLIST_ENTRY *__fastcall CHolographicInteropTaskQueue::ReverseList(
        CHolographicInteropTaskQueue *this,
        struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *result; // rax
  struct _SLIST_ENTRY *Next; // rcx

  result = 0LL;
  if ( a2 )
  {
    do
    {
      Next = a2->Next;
      a2->Next = result;
      result = a2;
      a2 = Next;
    }
    while ( Next );
  }
  return result;
}
