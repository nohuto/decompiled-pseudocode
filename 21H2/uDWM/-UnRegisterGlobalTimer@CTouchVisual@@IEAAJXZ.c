/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053768
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180048460 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800A20E0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x1800A2AB0 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800A4BF0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x1800A4C70 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800A576C (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800A57C0 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800A68A0 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800A6D00 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800A7460 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800AE1F0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AE2F0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AE3C0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800B8A80 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B8B50 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B9150 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E0BC (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 280) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 280) = 0;
  }
  return 0LL;
}
