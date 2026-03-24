/*
 * XREFs of ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C00073B0
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007280 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0180704 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     SupportedPixelRate @ 0x1C02FC670 (SupportedPixelRate.c)
 *     SupportedVideoSignal @ 0x1C02FC7E4 (SupportedVideoSignal.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator><_D3DDDI_RATIONAL>(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = a1[1];
  v3 = a2[1];
  return v3 * (unsigned __int64)*a1 >= v2 * (unsigned __int64)*a2 && (*a1 != *a2 || (_DWORD)v2 != (_DWORD)v3);
}
