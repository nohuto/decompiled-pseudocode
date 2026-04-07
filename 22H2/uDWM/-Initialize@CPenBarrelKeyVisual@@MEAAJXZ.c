/*
 * XREFs of ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5A20
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18009CD88 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025F00 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027EA0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B4D0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EC04 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800496E8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Initialize(CPenBarrelKeyVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v6; // rsi
  CDesktopManager *v7; // rax
  int v8; // eax
  int inserted; // eax

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 1, 0LL, (struct CBitmapSource **)this + 39);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v6 = (struct CVisual **)((char *)this + 320);
      v7 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 41) = *(_QWORD *)(*((_QWORD *)this + 39) + 24LL);
      *((_DWORD *)this + 84) = (int)(*((double *)v7 + 60) * 20.0);
      v8 = CImage::Create((struct CImage **)this + 40);
      v3 = v8;
      if ( v8 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CPenBarrelKeyVisual *)((char *)this + 32), *v6, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted >= 0 )
          CVisual::SetSize(*v6, (const struct tagSIZE *)this + 41);
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3Au);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x39u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x33u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x30u);
  }
  return v3;
}
