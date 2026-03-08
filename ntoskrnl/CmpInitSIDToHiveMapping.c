/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x14081356C
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140204750 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
