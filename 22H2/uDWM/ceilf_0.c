/*
 * XREFs of ceilf_0 @ 0x180057E12
 * Callers:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800121E0 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001338C (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002C058 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800BCE34 (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf_0(float X)
{
  return ceilf(X);
}
