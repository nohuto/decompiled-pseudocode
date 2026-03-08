/*
 * XREFs of RemoveVisRgnTracker @ 0x1C0025C7C
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C007D2FC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021EEC0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0024800 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C0025B7C (-RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0028874 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
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
