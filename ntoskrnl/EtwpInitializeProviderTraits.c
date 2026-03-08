/*
 * XREFs of EtwpInitializeProviderTraits @ 0x140860654
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140204750 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
