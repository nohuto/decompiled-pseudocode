/*
 * XREFs of ?ProcessUpdate@CCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITEEFFECT@@@Z @ 0x18021E81C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositeEffect::ProcessUpdate(
        CCompositeEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITEEFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CCompositeEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
