/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407D5534
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1403609E0 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
