/*
 * XREFs of ?ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@Z @ 0x18021625C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionLight::ProcessClearExclusions(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS *a3)
{
  return CCompositionLight::RemoveAllTargets((__int64)this, 1u);
}
