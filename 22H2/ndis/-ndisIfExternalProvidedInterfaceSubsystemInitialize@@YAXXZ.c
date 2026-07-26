/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C010971C
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0146098 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E6F78);
  qword_1C00E6F70 = (__int64)&qword_1C00E6F68;
  qword_1C00E6F68 = (__int64)&qword_1C00E6F68;
}
