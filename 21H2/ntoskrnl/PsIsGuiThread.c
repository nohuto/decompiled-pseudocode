/*
 * XREFs of PsIsGuiThread @ 0x1409AD6F4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsGuiThread(__int64 a1)
{
  return *(_BYTE *)(a1 + 120) >> 7;
}
