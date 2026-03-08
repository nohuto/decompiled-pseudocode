/*
 * XREFs of ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02F3B2C
 * Callers:
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02F3B84 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02F40EC (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049800 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters(DISPLAYSTATECHECKER *this)
{
  unsigned int v1; // edi
  unsigned int i; // ebx
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    if ( DisplayAdapterDiagData )
      v1 += *((_DWORD *)DisplayAdapterDiagData + 240);
  }
  return v1;
}
