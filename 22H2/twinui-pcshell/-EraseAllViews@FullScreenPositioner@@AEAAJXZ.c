/*
 * XREFs of ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x180214FA0
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802175B0 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::EraseAllViews(FullScreenPositioner *this)
{
  *((_QWORD *)this + 32) = *((_QWORD *)this + 31);
  return 0LL;
}
