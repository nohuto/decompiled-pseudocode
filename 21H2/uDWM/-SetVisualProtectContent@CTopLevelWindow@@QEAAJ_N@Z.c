/*
 * XREFs of ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18009574C
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180028754 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A42C (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180096A50 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::SetVisualProtectContent(CTopLevelWindow *this, char a2)
{
  *((_BYTE *)this + 241) &= ~0x40u;
  *((_BYTE *)this + 241) |= a2 << 6;
  return CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), a2);
}
