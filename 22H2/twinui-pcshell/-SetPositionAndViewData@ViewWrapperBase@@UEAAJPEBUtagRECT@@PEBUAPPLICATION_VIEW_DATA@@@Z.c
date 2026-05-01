/*
 * XREFs of ?SetPositionAndViewData@ViewWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180341170
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180340908 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 */

__int64 __fastcall ViewWrapperBase::SetPositionAndViewData(
        ViewWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  ViewWrapperBase::SetDesiredPosition(
    this,
    a2->left,
    a2->top,
    a2->right - a2->left,
    a2->bottom - a2->top,
    3,
    (__int64)a3);
  return 0LL;
}
