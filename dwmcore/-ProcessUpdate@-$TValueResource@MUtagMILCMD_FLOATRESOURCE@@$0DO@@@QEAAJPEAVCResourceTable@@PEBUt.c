/*
 * XREFs of ?ProcessUpdate@?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DO@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FLOATRESOURCE@@@Z @ 0x1801C2C14
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<float,tagMILCMD_FLOATRESOURCE,62>::ProcessUpdate(_DWORD *a1, __int64 a2, __int64 a3)
{
  a1[16] = *(_DWORD *)(a3 + 8);
  (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  return 0LL;
}
