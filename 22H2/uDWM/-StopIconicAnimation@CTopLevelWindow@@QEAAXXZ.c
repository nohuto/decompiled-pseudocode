/*
 * XREFs of ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040AE8
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180017098 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180044378 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180094A98 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopIconicAnimation(CTopLevelWindow *this)
{
  char v1; // al
  struct CVisual *v2; // rcx

  v1 = *((_BYTE *)this + 240);
  if ( (v1 & 0x40) != 0 )
  {
    *((_BYTE *)this + 240) = v1 & 0xBF;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
  }
}
