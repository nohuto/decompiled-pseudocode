/*
 * XREFs of ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C001235C
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0011860 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00121E4 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00122D0 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  CCHAR LeastSignificantBit; // al
  __int64 v5; // rcx

  LeastSignificantBit = RtlFindLeastSignificantBit(~*((_QWORD *)this + 12));
  v5 = (unsigned int)(LeastSignificantBit << 6);
  *((_QWORD *)this + 12) |= 1LL << LeastSignificantBit;
  *(_QWORD *)a2 = this;
  *((_DWORD *)a2 + 4) = v5;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 14) + v5;
}
