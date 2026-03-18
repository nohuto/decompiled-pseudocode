/*
 * XREFs of PsIsGuiThread @ 0x1409AE6E4
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsGuiThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) & 0x80) != 0;
}
