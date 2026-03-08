/*
 * XREFs of ?ProcessSetColor@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@@Z @ 0x18021F3C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetColor(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E14D8)(
           (char *)this + SDWORD2(xmmword_1803E14D8),
           &CCompositionAmbientLight::sc_Color,
           (char *)a3 + 8);
}
