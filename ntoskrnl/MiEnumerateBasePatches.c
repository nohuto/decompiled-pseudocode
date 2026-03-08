/*
 * XREFs of MiEnumerateBasePatches @ 0x1407F7420
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140640440 (MiMarkHotPatchesForHiberPhase.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x1407F6F6C (MiApplyRequiredSessionDriverHotPatches.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2A95C (MmReplaceImportEntriesForVerifier.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall MiEnumerateBasePatches(__int64 a1, unsigned int (__fastcall *a2)(_QWORD *, __int64), __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 296);
  for ( i = *(_QWORD **)(a1 + 296); i != v3 && a2(i - 37, a3); i = (_QWORD *)*i )
    ;
}
