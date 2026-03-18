/*
 * XREFs of RemoveVisRgnTracker @ 0x1C00C96FC
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C0058D0C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021C300 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C9470 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C00C95FC (-RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00CD17C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 */

void __fastcall RemoveVisRgnTracker(__int64 a1, int a2)
{
  int v3; // edx
  CVisRgnTrackerProp *v4; // rbx
  CVisRgnTrackerProp *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v5) )
  {
    v3 = a2;
    v4 = v5;
    CVisRgnTrackerProp::RemoveTracker(v5, v3);
    if ( !*((_DWORD *)v4 + 10) )
      CWindowProp::RemoveAndDeleteProp(v4);
  }
}
