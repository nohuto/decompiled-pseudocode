/*
 * XREFs of RtlCreateAtomTable @ 0x140622D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x1402522D0 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
