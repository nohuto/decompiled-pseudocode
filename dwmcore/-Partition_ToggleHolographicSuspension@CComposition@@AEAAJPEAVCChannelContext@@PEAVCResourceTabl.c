/*
 * XREFs of ?Partition_ToggleHolographicSuspension@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION@@@Z @ 0x180101268
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_ToggleHolographicSuspension(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION *a4)
{
  LOBYTE(a2) = *((_BYTE *)a4 + 4) != 0;
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *, struct CResourceTable *))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    a2,
    a3);
  return 0LL;
}
