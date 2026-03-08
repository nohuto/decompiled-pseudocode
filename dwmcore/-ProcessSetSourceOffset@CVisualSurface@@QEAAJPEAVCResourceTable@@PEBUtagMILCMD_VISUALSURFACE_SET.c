/*
 * XREFs of ?ProcessSetSourceOffset@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEOFFSET@@@Z @ 0x1802179C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetSourceOffset(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSOURCEOFFSET *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1468)(
         (char *)this + SDWORD2(xmmword_1803E1468),
         &CVisualSurface::sc_sourceOffset,
         (char *)a3 + 8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
