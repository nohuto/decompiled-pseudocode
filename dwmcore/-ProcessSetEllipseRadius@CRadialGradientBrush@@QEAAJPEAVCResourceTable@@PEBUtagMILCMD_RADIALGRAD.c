/*
 * XREFs of ?ProcessSetEllipseRadius@CRadialGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS@@@Z @ 0x18024AC40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRadialGradientBrush::ProcessSetEllipseRadius(
        CRadialGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1A88)(
         (char *)this + SDWORD2(xmmword_1803E1A88),
         &CRadialGradientBrush::sc_ellipseRadius,
         (char *)a3 + 8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
