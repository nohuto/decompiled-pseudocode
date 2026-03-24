/*
 * XREFs of RtlCreateAtomTable @ 0x14062D080
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140264090 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
