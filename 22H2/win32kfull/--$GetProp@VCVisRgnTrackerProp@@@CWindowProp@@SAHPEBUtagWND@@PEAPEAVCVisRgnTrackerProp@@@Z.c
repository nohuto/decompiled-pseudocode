/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00CD17C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     RemoveVisRgnTracker @ 0x1C00C96FC (RemoveVisRgnTracker.c)
 *     CreateVisRgnTracker @ 0x1C00CD0F8 (CreateVisRgnTracker.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
