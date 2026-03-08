/*
 * XREFs of ?ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCEPOLICY@@@Z @ 0x180102810
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ProcessSetSourcePolicy(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETSOURCEPOLICY *a3)
{
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
  return 0LL;
}
