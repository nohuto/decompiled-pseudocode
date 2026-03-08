/*
 * XREFs of PsGetWin32KFilterSet @ 0x1402E0F20
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[20]);
}
