/*
 * XREFs of ?ProcessSetOuterConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE@@@Z @ 0x180101DA4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E41D8)(
           (char *)this + SDWORD2(xmmword_1803E41D8),
           &CCompositionSpotLight::sc_OuterConeAngle,
           (char *)a3 + 8);
}
