/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     CreateVisRgnTracker @ 0x1C008300C (CreateVisRgnTracker.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     RemoveVisRgnTracker @ 0x1C00B3BEC (RemoveVisRgnTracker.c)
 *     HasVisRgnTracker @ 0x1C015C3EC (HasVisRgnTracker.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
