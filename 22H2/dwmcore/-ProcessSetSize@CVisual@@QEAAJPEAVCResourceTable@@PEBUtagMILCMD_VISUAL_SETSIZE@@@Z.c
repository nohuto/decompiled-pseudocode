/*
 * XREFs of ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x180131EA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180097BF4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSIZE *a3)
{
  CVisual::SetSize(this, *((float *)a3 + 2), *((float *)a3 + 3));
  return 0LL;
}
