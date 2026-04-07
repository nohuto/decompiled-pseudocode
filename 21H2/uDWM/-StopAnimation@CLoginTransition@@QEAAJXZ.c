/*
 * XREFs of ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18000A3E0
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x18000A340 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000B148 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800351E0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180096560 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18000A40C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CLoginTransition::StopAnimation(CLoginTransition *this)
{
  if ( *((_BYTE *)this + 68) )
  {
    CLoginTransition::_CleanupAnimation(this);
    *((_BYTE *)this + 68) = 0;
  }
  return 0LL;
}
