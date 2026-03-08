/*
 * XREFs of ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800FB1C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludeSubtree(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEXCLUDESUBTREE *a3)
{
  char v3; // r9
  char v4; // r8

  v3 = *((_BYTE *)a3 + 8) != 0;
  v4 = (*((_BYTE *)this + 102) & 2) != 0;
  *((_BYTE *)this + 102) = *((_BYTE *)this + 102) & 0xFD | (2 * v3);
  if ( v4 != v3 )
    CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
