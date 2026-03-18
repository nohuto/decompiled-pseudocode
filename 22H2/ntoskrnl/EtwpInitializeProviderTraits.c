/*
 * XREFs of EtwpInitializeProviderTraits @ 0x140864C94
 * Callers:
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14031D690 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
