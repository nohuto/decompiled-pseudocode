/*
 * XREFs of NtCreatePartition @ 0x1409B6550
 * Callers:
 *     <none>
 * Callees:
 *     PsCreatePartition @ 0x140859F8C (PsCreatePartition.c)
 */

__int64 __fastcall NtCreatePartition(ULONG_PTR a1, HANDLE *a2, int a3, int a4)
{
  return PsCreatePartition(a1, a2, a3, a4, KeGetCurrentThread()->PreviousMode, 0);
}
