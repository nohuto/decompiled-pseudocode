/*
 * XREFs of CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802A8E2C
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802A96C0 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801028E4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1802A8B70 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1802A8E0C (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 */

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
