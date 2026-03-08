/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x1402E1A60
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14076CCAC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 88LL) != 0LL;
}
