/*
 * XREFs of ceilf_0 @ 0x180058132
 * Callers:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012A20 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180013BCC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C898 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800BD0A4 (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf_0(float X)
{
  return ceilf(X);
}
