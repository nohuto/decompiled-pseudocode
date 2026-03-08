/*
 * XREFs of ?ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS@@@Z @ 0x1802487B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180004598 (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMaxBlurRadius(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS *a3)
{
  CProjectedShadowScene::SetMaxBlurRadius(this, *((float *)a3 + 2));
  return 0LL;
}
