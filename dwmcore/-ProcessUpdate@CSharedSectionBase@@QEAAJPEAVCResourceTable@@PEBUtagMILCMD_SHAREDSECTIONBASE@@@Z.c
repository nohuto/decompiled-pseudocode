/*
 * XREFs of ?ProcessUpdate@CSharedSectionBase@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONBASE@@@Z @ 0x18021EBC4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedSectionBase::ProcessUpdate(
        CSharedSectionBase *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONBASE *a3)
{
  *((_QWORD *)this + 8) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 4);
  (*(void (__fastcall **)(CSharedSectionBase *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
