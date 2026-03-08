/*
 * XREFs of CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802A0B2C
 * Callers:
 *     ?PreRender@CHolographicManager@@UEAAXXZ @ 0x1800EE9F0 (-PreRender@CHolographicManager@@UEAAXXZ.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801028E4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802A1E8C (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802A2630 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x1802A269C (-ReleaseInteropTextures@CHolographicManager@@QEAAXXZ.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1802A8B70 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1802A8E0C (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

PSLIST_ENTRY __fastcall CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___(
        __int64 a1,
        __int64 *a2)
{
  struct _SLIST_ENTRY *v4; // rax
  CHolographicInteropTaskQueue *v5; // rcx
  PSLIST_ENTRY result; // rax
  CHolographicInteropTaskQueue *v7; // rcx
  _QWORD *p_Next; // rsi
  union _SLIST_HEADER *v9; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h]

  wil::details::ResetEvent(*(wil::details **)(a1 + 48), a2);
  v4 = InterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  result = CHolographicInteropTaskQueue::ReverseList(v5, v4);
  p_Next = &result->Next;
  if ( result )
  {
    v9 = (union _SLIST_HEADER *)(a1 + 32);
    do
    {
      v10 = *a2;
      v11 = p_Next;
      p_Next = (_QWORD *)*p_Next;
      if ( *((_DWORD *)v11 + 2) == 19 )
      {
        v7 = (CHolographicInteropTaskQueue *)*((unsigned int *)v11 + 8);
        LODWORD(v12) = *((_DWORD *)v11 + 8);
        HIDWORD(v12) = *((_DWORD *)v11 + 6);
        if ( __PAIR64__(HIDWORD(v12), (unsigned int)v7) != *(_QWORD *)(v10 + 68) )
        {
          CHolographicManager::ReleaseInteropRenderTarget((CHolographicManager *)v10);
          CHolographicManager::ReleaseInteropTextures((CHolographicManager *)v10);
          *(_QWORD *)(v10 + 68) = v12;
          if ( (int)CHolographicManager::EnsureInteropRenderTarget((CHolographicManager *)v10) < 0 )
            *(struct _LUID *)(v10 + 68) = g_luidZero;
        }
      }
      CHolographicInteropTaskQueue::ClearMessage(v7, (struct MESSAGE *)v11);
      result = InterlockedPushEntrySList(v9, (PSLIST_ENTRY)v11);
    }
    while ( p_Next );
  }
  return result;
}
