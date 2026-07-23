/*
 * XREFs of RtlCreateAtomTable @ 0x1406A6AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14032D350 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
