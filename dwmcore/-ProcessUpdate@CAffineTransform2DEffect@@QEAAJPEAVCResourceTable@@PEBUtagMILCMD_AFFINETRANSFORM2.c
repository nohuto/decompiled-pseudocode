/*
 * XREFs of ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x18021E668
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::ProcessUpdate(
        CAffineTransform2DEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_AFFINETRANSFORM2DEFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 3);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a3 + 1);
  *((_QWORD *)this + 25) = *((_QWORD *)a3 + 4);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 10);
  (*(void (__fastcall **)(CAffineTransform2DEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
