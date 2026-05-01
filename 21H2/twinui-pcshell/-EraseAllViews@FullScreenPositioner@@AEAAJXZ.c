/*
 * XREFs of ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x180215150
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180217760 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::EraseAllViews(FullScreenPositioner *this)
{
  *((_QWORD *)this + 32) = *((_QWORD *)this + 31);
  return 0LL;
}
