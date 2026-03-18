/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x14051B418
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A88510 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
