NTSTATUS __fastcall PopDirectedDripsDiagCreateBlockerEntryULong(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  NTSTATUS result; // eax

  v3 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)a1 = v5;
  result = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 20), 0x10uLL, L"%d", a3);
  do
    ++v3;
  while ( *(_WORD *)(a1 + 2 * v3 + 20) );
  *(_DWORD *)(a1 + 16) = v3;
  return result;
}
