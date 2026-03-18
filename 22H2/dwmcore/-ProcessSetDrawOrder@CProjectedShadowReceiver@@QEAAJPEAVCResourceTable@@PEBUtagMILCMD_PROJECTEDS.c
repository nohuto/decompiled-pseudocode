/*
 * XREFs of ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z @ 0x18024BB84
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180005C6C (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetDrawOrder(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 24) != v3 )
  {
    *((_DWORD *)this + 24) = v3;
    CProjectedShadowReceiver::RequestRedraw(this);
  }
  return 0LL;
}
