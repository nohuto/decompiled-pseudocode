/*
 * XREFs of PsGetWin32KFilterSet @ 0x140233410
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[20]);
}
