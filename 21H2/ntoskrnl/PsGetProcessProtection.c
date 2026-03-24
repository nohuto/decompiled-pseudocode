/*
 * XREFs of PsGetProcessProtection @ 0x1402C9400
 * Callers:
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessProtection(__int64 a1)
{
  return *(_BYTE *)(a1 + 2170);
}
