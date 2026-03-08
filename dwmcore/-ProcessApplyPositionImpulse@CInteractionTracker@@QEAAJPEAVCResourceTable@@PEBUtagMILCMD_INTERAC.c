/*
 * XREFs of ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18022FE1C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18022DA04 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18022FC78 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *a3)
{
  int v4; // xmm1_4
  int v6; // eax
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 540) |= 0x10u;
  v4 = *((_DWORD *)a3 + 3);
  v8[0] = *((_DWORD *)a3 + 2);
  v8[2] = 0;
  v8[1] = v4;
  if ( CInteractionTracker::ApplyPositionImpulse(this, (const struct D2DVector3 *)v8) )
  {
    v6 = *((_DWORD *)this + 47);
    if ( v6 <= *((_DWORD *)a3 + 4) )
      v6 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 47) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  *((_BYTE *)this + 540) &= ~0x10u;
  return 0LL;
}
