/*
 * XREFs of ?ProcessSetAttenuation1@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1@@@Z @ 0x1801011CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation1(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E10C0)(
           (char *)this + SDWORD2(xmmword_1803E10C0),
           &CCompositionSpotLight::sc_Attenuation1,
           (char *)a3 + 8);
}
