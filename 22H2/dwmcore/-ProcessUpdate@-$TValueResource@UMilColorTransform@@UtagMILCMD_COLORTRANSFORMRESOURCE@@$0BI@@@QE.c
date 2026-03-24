/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORTRANSFORMRESOURCE@@@Z @ 0x18016FCB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,24>::ProcessUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a3 + 8);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a3 + 24);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 40);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a3 + 56);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a3 + 72);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a3 + 88);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a3 + 104);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  return 0LL;
}
