/*
 * XREFs of KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints @ 0x140238B18
 * Callers:
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x140238A7C (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints(_DWORD *a1, _DWORD *a2)
{
  return *a1 <= *a2 && a1[1] >= *a2;
}
