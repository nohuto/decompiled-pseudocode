/*
 * XREFs of ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C0049894
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F2ED8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1C02F38B4 (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049800 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(DISPLAYSTATECHECKER *this)
{
  unsigned int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v1 += 1328;
  }
  return v1;
}
