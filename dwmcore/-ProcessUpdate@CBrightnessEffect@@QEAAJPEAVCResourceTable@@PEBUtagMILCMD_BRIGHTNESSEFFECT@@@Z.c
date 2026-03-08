/*
 * XREFs of ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x18021E750
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::ProcessUpdate(
        CBrightnessEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BRIGHTNESSEFFECT *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 22) = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 23) = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CBrightnessEffect *, _QWORD, _QWORD))(v3 + 72))(this, 0LL, 0LL);
  return 0LL;
}
