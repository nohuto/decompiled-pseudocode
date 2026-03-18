/*
 * XREFs of HasVisRgnTracker @ 0x1C015C3EC
 * Callers:
 *     OffsetWindow @ 0x1C0084A28 (OffsetWindow.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C006DA68 (IsThreadDesktopComposed.c)
 */

_BOOL8 __fastcall HasVisRgnTracker(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    return 0LL;
  v3 = 0LL;
  return CWindowProp::GetProp<CVisRgnTrackerProp>(v1, &v3);
}
