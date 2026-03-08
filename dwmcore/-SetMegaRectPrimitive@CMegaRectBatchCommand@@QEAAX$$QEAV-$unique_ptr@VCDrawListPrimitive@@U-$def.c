/*
 * XREFs of ?SetMegaRectPrimitive@CMegaRectBatchCommand@@QEAAX$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@AEBVCMILMatrix@@@Z @ 0x1800420A0
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCDrawListPrimitive@@@std@@$0A@@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800420F4 (--$-4U-$default_delete@VCDrawListPrimitive@@@std@@$0A@@-$unique_ptr@VCDrawListPrimitive@@U-$defa.c)
 */

__int64 __fastcall CMegaRectBatchCommand::SetMegaRectPrimitive(__int64 a1)
{
  __int64 result; // rax

  std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(a1 + 96);
  *(_OWORD *)(a1 + 16) = CMILMatrix::Identity;
  *(_OWORD *)(a1 + 32) = xmmword_1803E1F10;
  *(_OWORD *)(a1 + 48) = xmmword_1803E1F20;
  *(_OWORD *)(a1 + 64) = xmmword_1803E1F30;
  result = unk_1803E1F40;
  *(_DWORD *)(a1 + 80) = unk_1803E1F40;
  return result;
}
