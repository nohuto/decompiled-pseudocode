/*
 * XREFs of ?ProcessSetComposeOnce@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSEONCE@@@Z @ 0x1801030C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::ProcessSetComposeOnce(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETCOMPOSEONCE *a3)
{
  *((_BYTE *)this + 890) = *((_BYTE *)a3 + 8) != 0;
  return 0LL;
}
