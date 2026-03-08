/*
 * XREFs of ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z @ 0x1800F16CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetAnchorPoint(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT *a3)
{
  int v3; // xmm1_4
  struct CResourceTable *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = *((_DWORD *)a3 + 3);
  LODWORD(v5) = *((_DWORD *)a3 + 2);
  HIDWORD(v5) = v3;
  return ((__int64 (__fastcall *)(char *, void *, struct CResourceTable **))xmmword_1803E0360)(
           (char *)this + SDWORD2(xmmword_1803E0360),
           &CComponentTransform3D::sc_Anchor,
           &v5);
}
