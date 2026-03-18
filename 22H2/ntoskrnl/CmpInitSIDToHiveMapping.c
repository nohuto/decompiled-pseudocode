/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1408663A4
 * Callers:
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14031D690 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
