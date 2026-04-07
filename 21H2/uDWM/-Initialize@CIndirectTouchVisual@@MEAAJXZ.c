/*
 * XREFs of ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800ADAD0
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009CEE8 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180026740 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800286E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B580 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003ECB4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180049F3C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800AE37C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::Initialize(CIndirectTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  struct CVisual **v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  int inserted; // eax

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   Theme,
                                   8,
                                   0xFu,
                                   0LL,
                                   (struct CBitmapSource ***)this + 48);
    v3 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip >= 0 )
    {
      v6 = (struct CVisual **)((char *)this + 376);
      v7 = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      *((_DWORD *)this + 104) = -1;
      *((_DWORD *)this + 74) = 0;
      *(_QWORD *)((char *)this + 308) = v7;
      *((_DWORD *)this + 80) = 1041865114;
      *((_DWORD *)this + 82) = 1041865114;
      *((_DWORD *)this + 81) = 1036831949;
      *((_DWORD *)this + 83) = 1051372202;
      *((_DWORD *)this + 84) = 1059760810;
      v8 = CImage::Create((struct CImage **)this + 47);
      v3 = v8;
      if ( v8 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CIndirectTouchVisual *)((char *)this + 32), *v6, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetSize(*v6, (const struct tagSIZE *)((char *)this + 308));
          *((_QWORD *)this + 44) = 0LL;
          *((_QWORD *)this + 45) = 0LL;
          *((_QWORD *)this + 46) = 0LL;
          *((_DWORD *)this + 85) = 0;
          *((_DWORD *)this + 86) = 0;
          CIndirectTouchVisual::UpdateOpacityAndSource(this);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x37u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x36u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x28u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x25u);
  }
  return v3;
}
