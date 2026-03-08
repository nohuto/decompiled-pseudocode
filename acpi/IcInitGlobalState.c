/*
 * XREFs of IcInitGlobalState @ 0x1C009F3D0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00ABB68 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C006E5D8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
