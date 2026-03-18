/*
 * XREFs of RemoveVisRgnTracker @ 0x1C00B3BEC
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C00B36BC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01510C0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C00B3C34 (-RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

void __fastcall RemoveVisRgnTracker(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edx
  CVisRgnTrackerProp *v4; // rbx
  CVisRgnTrackerProp *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( CWindowProp::GetProp<CVisRgnTrackerProp>(a1, (__int64 *)&v5) )
  {
    v3 = a2;
    v4 = v5;
    CVisRgnTrackerProp::RemoveTracker(v5, v3);
    if ( !*((_DWORD *)v4 + 10) )
      CWindowProp::RemoveAndDeleteProp(v4);
  }
}
