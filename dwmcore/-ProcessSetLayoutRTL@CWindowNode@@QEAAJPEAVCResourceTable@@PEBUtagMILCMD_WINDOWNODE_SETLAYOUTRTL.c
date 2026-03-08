/*
 * XREFs of ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x1800F9C28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetLayoutRTL(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETLAYOUTRTL *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 892) != v3 )
  {
    *((_BYTE *)this + 892) = v3;
    CVisual::PropagateFlags((__int64)this, 4u);
  }
  return 0LL;
}
