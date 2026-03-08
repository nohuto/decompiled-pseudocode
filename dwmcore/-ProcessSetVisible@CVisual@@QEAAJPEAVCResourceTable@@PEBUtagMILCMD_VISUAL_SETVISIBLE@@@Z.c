/*
 * XREFs of ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x18012DD14
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E7EF4 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetVisible(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETVISIBLE *a3)
{
  CVisual::SetVisible(this, *((_BYTE *)a3 + 8));
  return 0LL;
}
