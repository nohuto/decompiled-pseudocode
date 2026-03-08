/*
 * XREFs of RtlCreateAtomTable @ 0x1407DCAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140355EB0 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
