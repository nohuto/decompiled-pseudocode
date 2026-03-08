/*
 * XREFs of ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802501B4
 * Callers:
 *     ?Draw@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A270 (-Draw@CSynchronousSuperWetInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801C8FD8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9B00 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x1802503A0 (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180250444 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::Draw(
        CSynchronousSuperWetInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CSynchronousSuperWetInk *v4; // rbx
  CSynchronousSuperWetInk *v7; // rcx
  CSuperWetInkManager *v8; // rsi
  unsigned int PerFrameDataId; // eax
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CSynchronousSuperWetInk *)((char *)this - 312);
  if ( CSynchronousSuperWetInk::IsSuperWetCompatible((CSynchronousSuperWetInk *)((char *)this - 312)) )
  {
    v8 = *(CSuperWetInkManager **)(*((_QWORD *)this - 37) + 256LL);
    PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId(v7);
    CSynchronousSuperWetInk::PullNewPerFrameData(v4, PerFrameDataId, &v11);
    if ( v11 )
    {
      CSuperWetInkManager::OnUpdatedInkReceived(v8, v4);
      *((_BYTE *)this - 216) = 0;
    }
    CSuperWetInkManager::TryRegisterSuperWetForDraw(v8, v4, a2, 0, &v11);
  }
  return 0LL;
}
