/*
 * XREFs of ??$?4U?$default_delete@VCDrawListPrimitive@@@std@@$0A@@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800420F4
 * Callers:
 *     ?SetMegaRectPrimitive@CMegaRectBatchCommand@@QEAAX$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@AEBVCMILMatrix@@@Z @ 0x1800420A0 (-SetMegaRectPrimitive@CMegaRectBatchCommand@@QEAAX$$QEAV-$unique_ptr@VCDrawListPrimitive@@U-$def.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@@Z @ 0x1801FED3C (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800EB2E0 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<CDrawListPrimitive>::operator()();
  }
  return a1;
}
