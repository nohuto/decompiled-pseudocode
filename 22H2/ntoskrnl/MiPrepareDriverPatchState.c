/*
 * XREFs of MiPrepareDriverPatchState @ 0x1408C4D8C
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F638 (MmWriteSystemImageTracepoint.c)
 *     MiApplyDriverHotPatch @ 0x1408C8E04 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE6F0 (MiUnapplyDriverHotPatch.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0B44 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 a1)
{
  PVOID Pool; // rcx

  Pool = MiAllocatePool(64, (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3, 0x4D425044u);
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = Pool;
  *(_DWORD *)(a1 + 56) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(*(_QWORD *)a1 + 48LL)) )
    *(_DWORD *)(a1 + 56) = 2;
  return 0LL;
}
