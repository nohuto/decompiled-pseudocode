/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x1404D1FBC
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098F9D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
