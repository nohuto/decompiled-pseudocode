/*
 * XREFs of ?ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@Z @ 0x1802197BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
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
