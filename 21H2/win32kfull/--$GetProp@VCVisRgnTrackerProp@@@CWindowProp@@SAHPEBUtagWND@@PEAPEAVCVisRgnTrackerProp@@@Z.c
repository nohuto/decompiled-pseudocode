/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C004E9AC
 * Callers:
 *     CreateVisRgnTracker @ 0x1C0036014 (CreateVisRgnTracker.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     RemoveVisRgnTracker @ 0x1C00EF3EC (RemoveVisRgnTracker.c)
 * Callees:
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
