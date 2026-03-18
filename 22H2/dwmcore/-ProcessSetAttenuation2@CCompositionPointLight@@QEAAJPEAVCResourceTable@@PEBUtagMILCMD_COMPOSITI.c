/*
 * XREFs of ?ProcessSetAttenuation2@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2@@@Z @ 0x180224EE4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation2(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E46D0)(
           (char *)this + SDWORD2(xmmword_1803E46D0),
           &CCompositionPointLight::sc_Attenuation2,
           (char *)a3 + 8);
}
