/*
 * XREFs of PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099AEF4
 * Callers:
 *     PopDirectedDripsDiagRundownDevices @ 0x14099B8B8 (PopDirectedDripsDiagRundownDevices.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 */

NTSTATUS __fastcall PopDirectedDripsDiagCreateBlockerEntryBoolean(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  NTSTATUS result; // eax

  v2 = -1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)a1 = v4;
  result = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 20), 0x10uLL, L"%s", L"TRUE");
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2 + 20) );
  *(_DWORD *)(a1 + 16) = v2;
  return result;
}
