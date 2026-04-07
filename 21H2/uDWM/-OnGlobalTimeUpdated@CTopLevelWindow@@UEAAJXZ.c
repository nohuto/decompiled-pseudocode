/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x1800951B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009ACD4 (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnGlobalTimeUpdated(CTopLevelWindow *this)
{
  if ( (*((_BYTE *)this + 240) & 0x40) != 0 )
    CWindowIconic::OnGlobalTimeUpdated(*(CWindowIconic **)(*((_QWORD *)this + 91) + 424LL));
  if ( *((_DWORD *)this + 61) )
    CVisual::SetDirtyFlags(this, 0x800000);
  return 0LL;
}
