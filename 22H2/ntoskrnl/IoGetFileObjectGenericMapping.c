/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x140677FA0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC7E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C67F4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
