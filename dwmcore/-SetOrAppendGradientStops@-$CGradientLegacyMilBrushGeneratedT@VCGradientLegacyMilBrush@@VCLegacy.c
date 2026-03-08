/*
 * XREFs of ?SetOrAppendGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@AEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@_N@Z @ 0x1801C5024
 * Callers:
 *     ?AppendGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@@Z @ 0x1801C0CC8 (-AppendGradientStops@-$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBr.c)
 *     ?SetGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@@Z @ 0x1801C3DFC (-SetGradientStops@-$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$insert@PEBUMilGradientStop@@$0A@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1@Z @ 0x1801BCC30 (--$insert@PEBUMilGradientStop@@$0A@@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@@@s.c)
 */

__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetOrAppendGradientStops(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 14;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<MilGradientStop>::insert<MilGradientStop const *,0>(
    v4,
    &v6,
    a1[15],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 24LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a1 + 9))(a1, 0LL, 0LL);
  return 0LL;
}
