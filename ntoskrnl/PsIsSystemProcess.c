/*
 * XREFs of PsIsSystemProcess @ 0x140282490
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2172) & 0x1000) != 0;
}
