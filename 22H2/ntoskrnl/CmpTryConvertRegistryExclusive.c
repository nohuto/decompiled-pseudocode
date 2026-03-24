/*
 * XREFs of CmpTryConvertRegistryExclusive @ 0x14086EB14
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExTryConvertSharedToExclusiveLite @ 0x1405B541C (ExTryConvertSharedToExclusiveLite.c)
 */

__int64 CmpTryConvertRegistryExclusive()
{
  return ExTryConvertSharedToExclusiveLite();
}
