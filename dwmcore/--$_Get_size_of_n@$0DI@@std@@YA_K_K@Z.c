/*
 * XREFs of ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180036EEC
 * Callers:
 *     ?_Reallocate_exactly@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAX_K@Z @ 0x180026A10 (-_Reallocate_exactly@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@.c)
 *     ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x1801D61A4 (--$_Emplace_reallocate@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x180208160 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180265298 (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ?_Buy_nonzero@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z @ 0x180269ADC (-_Buy_nonzero@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<56>(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    std::_Throw_bad_array_new_length();
  return 56 * a1;
}
