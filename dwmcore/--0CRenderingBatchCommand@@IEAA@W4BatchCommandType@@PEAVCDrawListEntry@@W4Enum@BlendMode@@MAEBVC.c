/*
 * XREFs of ??0CRenderingBatchCommand@@IEAA@W4BatchCommandType@@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802022BC
 * Callers:
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180091D54 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ??0CCpuClipAntialiasBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802021AC (--0CCpuClipAntialiasBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z.c)
 *     ??0CMegaRectBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1802021EC (--0CMegaRectBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingBatchCommand::CRenderingBatchCommand(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  int v9; // eax

  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(__int64))a3)(a3);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a6;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a6 + 16);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a6 + 32);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a6 + 48);
  v9 = *(_DWORD *)(a6 + 64);
  *(_DWORD *)(a1 + 88) = a5;
  *(_DWORD *)(a1 + 80) = v9;
  *(_DWORD *)(a1 + 84) = a4;
  *(_BYTE *)(a1 + 92) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) == 2;
  return a1;
}
