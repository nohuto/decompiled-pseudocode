/*
 * XREFs of ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180091D54
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180092408 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801FD230 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMegaRectBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802021EC (--0CMegaRectBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z.c)
 *     ??0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802022BC (--0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVC.c)
 */

char __fastcall CBatchCommand::InitializeForRendering(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        float a4,
        CMILMatrix *a5)
{
  int v8; // ebx
  int v9; // eax
  char result; // al
  int v11; // ebx

  v8 = 1;
  if ( (a2[12] & 8) != 0 )
  {
    if ( a3 == 5 && CMILMatrix::Is2DAxisAlignedPreserving(a5) )
      v8 = 4;
    v11 = v8 - 4;
    if ( !v11 )
      return CMegaRectBatchCommand::CMegaRectBatchCommand(a1, a2, a3);
    if ( v11 == 1 )
      goto LABEL_3;
  }
  else if ( (a2[12] & 0x1000) != 0 )
  {
LABEL_3:
    *(_DWORD *)a1 = 5;
    *(_QWORD *)(a1 + 8) = a2;
    (**(void (__fastcall ***)(_DWORD *))a2)(a2);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(a1 + 32) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(a1 + 48) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(a1 + 64) = *((_OWORD *)a5 + 3);
    v9 = *((_DWORD *)a5 + 16);
    *(float *)(a1 + 88) = a4;
    *(_DWORD *)(a1 + 80) = v9;
    *(_DWORD *)(a1 + 84) = a3;
    result = (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 32LL))(a2) == 2;
    *(_BYTE *)(a1 + 92) = result;
    *(_DWORD *)(a1 + 176) = 0;
    return result;
  }
  return CRenderingBatchCommand::CRenderingBatchCommand(a1, 1LL, a2, a3, LODWORD(a4), a5);
}
