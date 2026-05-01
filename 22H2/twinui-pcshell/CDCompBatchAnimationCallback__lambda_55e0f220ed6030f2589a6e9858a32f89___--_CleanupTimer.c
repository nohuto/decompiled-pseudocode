/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CleanupTimer @ 0x180421360
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InvokeCallback @ 0x180421480 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::s_TimerWndProc @ 0x1804217C0 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--s_TimerWndProc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CleanupTimer(__int64 a1)
{
  HWND v1; // rbx
  BOOL result; // eax

  v1 = *(HWND *)(a1 + 40);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    KillTimer(v1, 0x64uLL);
    return DestroyWindow(v1);
  }
  return result;
}
