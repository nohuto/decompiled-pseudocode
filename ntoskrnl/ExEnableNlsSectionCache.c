/*
 * XREFs of ExEnableNlsSectionCache @ 0x1409F8758
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *ExEnableNlsSectionCache()
{
  struct _LIST_ENTRY *result; // rax

  result = PsGetCurrentServerSiloGlobals();
  result[66].Flink->Blink = (struct _LIST_ENTRY *)1;
  return result;
}
