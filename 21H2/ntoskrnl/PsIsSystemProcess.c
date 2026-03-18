/*
 * XREFs of PsIsSystemProcess @ 0x1402820E0
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2172) & 0x1000) != 0;
}
