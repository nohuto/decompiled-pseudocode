/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C00995B0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00ABB68 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C006E6B8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
