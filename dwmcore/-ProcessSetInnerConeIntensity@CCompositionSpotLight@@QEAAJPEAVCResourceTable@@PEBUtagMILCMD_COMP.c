/*
 * XREFs of ?ProcessSetInnerConeIntensity@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY@@@Z @ 0x1802235BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeIntensity(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1280)(
           (char *)this + SDWORD2(xmmword_1803E1280),
           &CCompositionSpotLight::sc_InnerConeIntensity,
           (char *)a3 + 8);
}
