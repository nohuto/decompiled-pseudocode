/*
 * XREFs of ?ProcessSetOffset@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETOFFSET@@@Z @ 0x1800F12E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetOffset(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETOFFSET *a3)
{
  int v3; // xmm1_4
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = *((_DWORD *)a3 + 4);
  v5[1] = v3;
  return ((__int64 (__fastcall *)(char *, void *, _DWORD *))xmmword_1803E03D0)(
           (char *)this + SDWORD2(xmmword_1803E03D0),
           &CComponentTransform3D::sc_Offset,
           v5);
}
