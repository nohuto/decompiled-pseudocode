/*
 * XREFs of ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BBAC
 * Callers:
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18009AE58 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009BA84 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E0BC (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UnRegisterGlobalTimer(CAnimatedGlassSheet *this)
{
  if ( *((_BYTE *)this + 488) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 488) = 0;
  }
  return 0LL;
}
