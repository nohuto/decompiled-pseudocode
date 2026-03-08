/*
 * XREFs of ?ProcessSetOuterConeIntensity@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEINTENSITY@@@Z @ 0x1802236F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeIntensity(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E12B8)(
           (char *)this + SDWORD2(xmmword_1803E12B8),
           &CCompositionSpotLight::sc_OuterConeIntensity,
           (char *)a3 + 8);
}
