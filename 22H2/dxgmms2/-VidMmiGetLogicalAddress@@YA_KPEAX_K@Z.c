/*
 * XREFs of ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1C00F1734
 * Callers:
 *     ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x1C004D4DC (-RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x1C004D5B0 (-RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C00BA500 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E52E8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00FCEE8 (-FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0005224 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 */

__int64 __fastcall VidMmiGetLogicalAddress(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = SysMmGetLogicalAddress(a1);
  if ( result )
    result += a2;
  return result;
}
