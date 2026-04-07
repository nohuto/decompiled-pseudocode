/*
 * XREFs of ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800A42A0
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x18009D248 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025F00 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027EA0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800496E8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::Initialize(CTouchDragVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  int v5; // edx
  int BitmapFromAtlas; // eax

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v5, 0LL, (struct CBitmapSource **)this + 48);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
      *(_OWORD *)((char *)this + 392) = *(_OWORD *)(*((_QWORD *)this + 48) + 80LL);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x45u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x42u);
  }
  return v3;
}
