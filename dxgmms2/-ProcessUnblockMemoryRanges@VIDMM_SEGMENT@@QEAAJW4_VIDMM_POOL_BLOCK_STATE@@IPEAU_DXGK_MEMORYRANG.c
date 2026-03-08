/*
 * XREFs of ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00FE97C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?UnblockRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0033988 (-UnblockRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C010226C (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ProcessUnblockMemoryRanges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v7; // rbx

  v5 = a2;
  if ( (*(_DWORD *)(a1 + 80) & 0x2000) != 0 && (_BYTE)a2 == 7 )
  {
    v7 = a1 + 92;
    if ( *(_DWORD *)(a1 + 92) != -1 )
    {
      VIDMM_CPU_HOST_APERTURE::UnblockRange(
        *(VIDMM_CPU_HOST_APERTURE **)(a1 + 504),
        (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v7);
      *(_DWORD *)v7 = -1;
      *(_DWORD *)(v7 + 4) = -1;
    }
  }
  LOBYTE(a2) = v5;
  return VIDMM_LINEAR_POOL::FreeMemoryBlocks(*(_QWORD *)(a1 + 152), a2, a3, a4);
}
