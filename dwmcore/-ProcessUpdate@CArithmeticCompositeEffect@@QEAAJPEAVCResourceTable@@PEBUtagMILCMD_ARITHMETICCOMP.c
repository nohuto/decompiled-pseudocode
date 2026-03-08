/*
 * XREFs of ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x18021E6D0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::ProcessUpdate(
        CArithmeticCompositeEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ARITHMETICCOMPOSITEEFFECT *a3)
{
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 6);
  (*(void (__fastcall **)(CArithmeticCompositeEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
