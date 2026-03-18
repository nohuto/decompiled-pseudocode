/*
 * XREFs of ?ProcessSetAttenuation1@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1@@@Z @ 0x180224EB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation1(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E4698)(
           (char *)this + SDWORD2(xmmword_1803E4698),
           &CCompositionPointLight::sc_Attenuation1,
           (char *)a3 + 8);
}
