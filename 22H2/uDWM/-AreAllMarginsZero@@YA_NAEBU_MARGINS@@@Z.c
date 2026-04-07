/*
 * XREFs of ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18000FA80
 * Callers:
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x18000F960 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001116C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001E900 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreAllMarginsZero(const struct _MARGINS *a1)
{
  bool result; // al

  result = 0;
  if ( !a1->cxLeftWidth && !a1->cyTopHeight && !a1->cxRightWidth )
    return a1->cyBottomHeight == 0;
  return result;
}
