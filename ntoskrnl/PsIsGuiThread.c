/*
 * XREFs of PsIsGuiThread @ 0x1409AB664
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsGuiThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) & 0x80) != 0;
}
