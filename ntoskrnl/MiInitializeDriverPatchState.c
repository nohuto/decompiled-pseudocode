/*
 * XREFs of MiInitializeDriverPatchState @ 0x1407F746C
 * Callers:
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiInitializeDriverPatchState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset((void *)(a2 + 8), 0, 0x60uLL);
  *(_QWORD *)a2 = a1;
  result = (*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
