/*
 * XREFs of ?ProcessSetIntensity@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY@@@Z @ 0x180222954
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetIntensity(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E4510)(
           (char *)this + SDWORD2(xmmword_1803E4510),
           &CCompositionAmbientLight::sc_Intensity,
           (char *)a3 + 8);
}
