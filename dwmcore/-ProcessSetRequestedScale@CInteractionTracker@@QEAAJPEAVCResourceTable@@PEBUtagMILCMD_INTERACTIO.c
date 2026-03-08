/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1802308AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18022FC78 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x180231C8C (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  int v5; // eax

  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 3) ^ _xmm;
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::SetRequestedScale(this, *((float *)a3 + 2)) )
  {
    v5 = *((_DWORD *)this + 47);
    if ( v5 <= *((_DWORD *)a3 + 6) )
      v5 = *((_DWORD *)a3 + 6);
    *((_BYTE *)this + 540) |= 4u;
    *((_DWORD *)this + 47) = v5;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
