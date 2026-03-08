/*
 * XREFs of ??0CMegaRectBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802021EC
 * Callers:
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180091D54 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 * Callees:
 *     ??0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802022BC (--0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVC.c)
 */

_QWORD *__fastcall CMegaRectBatchCommand::CMegaRectBatchCommand(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        float a4,
        __int64 a5)
{
  CRenderingBatchCommand::CRenderingBatchCommand(a1, 4LL, a2, a3, LODWORD(a4), a5);
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  return a1;
}
