/*
 * XREFs of MiPrepareDriverPatchState @ 0x140A28934
 * Callers:
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x140880F78 (MiCompleteSecureDriverLoad.c)
 *     MiLockAndMapEntireDriver @ 0x140A31608 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 a1, __int64 a2)
{
  PVOID Pool; // rcx

  Pool = MiAllocatePool(
           64,
           8 * ((*(_DWORD *)(a1 + 24) >> 6) + (unsigned int)((*(_DWORD *)(a1 + 24) & 0x3F) != 0)),
           0x4D425044u);
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = Pool;
  *(_DWORD *)(a1 + 96) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(*(_QWORD *)a1 + 48LL)) )
    *(_DWORD *)(a1 + 96) = 2;
  *(_QWORD *)(a1 + 16) = a2;
  return 0LL;
}
