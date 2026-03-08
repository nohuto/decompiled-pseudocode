/*
 * XREFs of ??0CCpuClipAntialiasBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802021AC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802022BC (--0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVC.c)
 */

__int64 __fastcall CCpuClipAntialiasBatchCommand::CCpuClipAntialiasBatchCommand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        float a4,
        __int64 a5)
{
  CRenderingBatchCommand::CRenderingBatchCommand(a1, 5LL, a2, a3, LODWORD(a4), a5);
  *(_DWORD *)(a1 + 176) = 0;
  return a1;
}
