/*
 * XREFs of CmpConvertRegistryShared @ 0x14086EAF8
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140309910 (ExConvertExclusiveToSharedLite.c)
 */

void CmpConvertRegistryShared()
{
  ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
}
