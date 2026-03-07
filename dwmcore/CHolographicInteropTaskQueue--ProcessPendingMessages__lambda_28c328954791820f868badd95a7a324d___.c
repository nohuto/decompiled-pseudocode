PSLIST_ENTRY __fastcall CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___(
        __int64 a1,
        CHolographicClient **a2)
{
  struct _SLIST_ENTRY *v4; // rax
  CHolographicInteropTaskQueue *v5; // rcx
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  union _SLIST_HEADER *v8; // rsi
  _QWORD *v9; // rbx
  CHolographicInteropTaskQueue *v10; // rcx

  wil::details::ResetEvent(*(wil::details **)(a1 + 48), a2);
  v4 = InterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  result = CHolographicInteropTaskQueue::ReverseList(v5, v4);
  p_Next = &result->Next;
  if ( result )
  {
    v8 = (union _SLIST_HEADER *)(a1 + 32);
    do
    {
      v9 = p_Next;
      p_Next = (_QWORD *)*p_Next;
      CHolographicClient::ProcessMessage(
        *a2,
        *((_DWORD *)v9 + 2),
        (struct IUnknown *)v9[2],
        (void *)v9[3],
        (void *)v9[4],
        (void *)v9[5],
        (void *)v9[6]);
      CHolographicInteropTaskQueue::ClearMessage(v10, (struct MESSAGE *)v9);
      result = InterlockedPushEntrySList(v8, (PSLIST_ENTRY)v9);
    }
    while ( p_Next );
  }
  return result;
}
