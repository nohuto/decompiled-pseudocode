/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801028E4
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x1800322EC (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z @ 0x180207194 (-WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802A0B2C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802A8E2C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802A9040 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019762C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x932,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
