/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTRESOURCE@@@Z @ 0x18001BE20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<MilRectF,tagMILCMD_RECTRESOURCE,140>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *a1;
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 72))(a1, 0LL, 0LL);
  return 0LL;
}
