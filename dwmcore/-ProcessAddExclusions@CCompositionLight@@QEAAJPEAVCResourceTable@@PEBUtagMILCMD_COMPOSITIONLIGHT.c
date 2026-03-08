/*
 * XREFs of ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z @ 0x180216238
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x180011B08 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CCompositionLight::ProcessAddExclusions(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS *a3,
        unsigned int *a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return CCompositionLight::AddTargets((__int64)this, a2, *((_DWORD *)a3 + 2), a4, v5, 1u);
}
