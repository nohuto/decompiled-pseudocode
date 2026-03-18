/*
 * XREFs of ?ProcessSetVerticalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT@@@Z @ 0x1800F0E3C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetVerticalAlignment(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT *a3)
{
  struct CResourceTable *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LODWORD(v4) = *((_DWORD *)a3 + 2);
  return ((__int64 (__fastcall *)(char *, void *, struct CResourceTable **))xmmword_1803E4BD8)(
           (char *)this + SDWORD2(xmmword_1803E4BD8),
           &CSurfaceBrush::sc_VerticalAlignment,
           &v4);
}
