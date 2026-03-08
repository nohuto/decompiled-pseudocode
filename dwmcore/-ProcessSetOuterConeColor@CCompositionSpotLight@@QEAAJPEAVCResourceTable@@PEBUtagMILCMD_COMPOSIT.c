/*
 * XREFs of ?ProcessSetOuterConeColor@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR@@@Z @ 0x1802236BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeColor(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1050)(
           (char *)this + SDWORD2(xmmword_1803E1050),
           &CCompositionSpotLight::sc_OuterConeColor,
           (char *)a3 + 8);
}
