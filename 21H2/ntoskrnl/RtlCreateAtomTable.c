/*
 * XREFs of RtlCreateAtomTable @ 0x1406A6270
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14022EB30 (RtlCreateAtomTableEx.c)
 */

__int64 __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
