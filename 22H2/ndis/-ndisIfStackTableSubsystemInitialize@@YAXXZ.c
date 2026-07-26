/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C01096E4
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0146098 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E5B70);
  qword_1C00E5B68 = (__int64)&qword_1C00E5B60;
  qword_1C00E5B60 = &qword_1C00E5B60;
}
