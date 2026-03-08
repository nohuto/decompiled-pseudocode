/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0028874
 * Callers:
 *     RemoveVisRgnTracker @ 0x1C0025C7C (RemoveVisRgnTracker.c)
 *     CreateVisRgnTracker @ 0x1C00287F0 (CreateVisRgnTracker.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
