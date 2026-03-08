/*
 * XREFs of ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18023040C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231890 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x180231D28 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaDecayRates(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)a3 + 3);
  v8[2] = 0;
  v8[0] = v3;
  v8[1] = v4;
  CInteractionTracker::SetPositionInertiaDecayRate(this, (const struct D2DVector3 *)v8);
  CInteractionTracker::SetScaleInertiaDecayRate(this, *((float *)a3 + 4));
  return 0LL;
}
