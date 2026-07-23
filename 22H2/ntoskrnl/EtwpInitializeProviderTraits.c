/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1407D41F4
 * Callers:
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1403609E0 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  EtwpProviderTraitsUmTree = 0LL;
}
