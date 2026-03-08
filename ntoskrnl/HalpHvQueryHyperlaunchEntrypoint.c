/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x140518EE8
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
