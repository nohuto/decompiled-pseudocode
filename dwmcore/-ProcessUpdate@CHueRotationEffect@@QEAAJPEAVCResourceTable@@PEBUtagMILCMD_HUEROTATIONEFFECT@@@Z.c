/*
 * XREFs of ?ProcessUpdate@CHueRotationEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HUEROTATIONEFFECT@@@Z @ 0x18021EA38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHueRotationEffect::ProcessUpdate(
        CHueRotationEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HUEROTATIONEFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CHueRotationEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
