/*
 * XREFs of PipEnumeratePersistedMemory @ 0x14094FFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PipEnumeratePersistedMemory(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)a3 )
    *(_QWORD *)(*(_QWORD *)a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 12))++) = a2;
  else
    ++*(_DWORD *)(a3 + 8);
  return 0LL;
}
