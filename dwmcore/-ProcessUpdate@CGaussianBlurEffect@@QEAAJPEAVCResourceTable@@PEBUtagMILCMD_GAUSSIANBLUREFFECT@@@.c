/*
 * XREFs of ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x18021E8BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::ProcessUpdate(
        CGaussianBlurEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GAUSSIANBLUREFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 4);
  (*(void (__fastcall **)(CGaussianBlurEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
