/*
 * XREFs of DbgkpTriageDumpSaveState @ 0x1407F9060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpTriageDumpSaveState(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *((_DWORD *)a1 + 3) = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 4) = *(_DWORD *)(v1 + 8312);
  result = *(unsigned int *)(v1 + 8316);
  *((_DWORD *)a1 + 5) = result;
  return result;
}
