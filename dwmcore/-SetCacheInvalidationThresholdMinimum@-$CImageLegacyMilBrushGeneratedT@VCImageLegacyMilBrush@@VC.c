/*
 * XREFs of ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x1801C33F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum(
        float *a1,
        float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[39] )
  {
    v2 = *(_QWORD *)a1;
    a1[39] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
