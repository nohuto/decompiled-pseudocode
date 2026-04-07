/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180049E8C
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800485B8 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800494AC (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180049F6C (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800A19A0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6878 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD860 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180049BE0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004F384 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     _Init_thread_footer @ 0x180053C0C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053C7C (_Init_thread_header.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct CBitmapSource ***a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int BitmapsFromAtlasImageStrip; // eax

  if ( dword_1800E6DB4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E6DB4);
    if ( dword_1800E6DB4 == -1 )
    {
      dword_1800E3FF8 = -2147023728;
      Init_thread_footer(&dword_1800E6DB4);
    }
  }
  v9 = DynArrayImpl<0>::AddMultiple(a5, 8LL, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3FF8, 1LL, v9, 0x368u);
  }
  else
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, iPartId, a3, a4, *a5);
    v10 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3FF8, 1LL, BitmapsFromAtlasImageStrip, 0x370u);
  }
  return v10;
}
