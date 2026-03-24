/*
 * XREFs of IcInitGlobalState @ 0x1C008F700
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEF34 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C0081548 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
