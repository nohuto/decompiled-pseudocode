/*
 * XREFs of ?SetSpreadMethod@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJW4Enum@MilGradientSpreadMethod@@@Z @ 0x1801C6974
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetSpreadMethod(
        __int64 *a1,
        int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 26) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 26) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
