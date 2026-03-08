/*
 * XREFs of ?ProcessSetIntensity@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY@@@Z @ 0x1802203B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetIntensity(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E15B8)(
           (char *)this + SDWORD2(xmmword_1803E15B8),
           &CCompositionDistantLight::sc_Intensity,
           (char *)a3 + 8);
}
