/*
 * XREFs of ?ProcessUpdate@?$TValueResource@U_D3DCOLORVALUE@@UtagMILCMD_COLORRESOURCE@@$0BJ@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORRESOURCE@@@Z @ 0x1801C5FAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,25>::ProcessUpdate(
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
