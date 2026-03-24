/*
 * XREFs of PsGetWin32KFilterSet @ 0x1402A6DF0
 * Callers:
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[2].AffinityPadding[0]);
}
