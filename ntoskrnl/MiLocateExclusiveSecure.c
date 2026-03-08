/*
 * XREFs of MiLocateExclusiveSecure @ 0x1402EDA70
 * Callers:
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocateExclusiveSecure(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !v1 )
    return 0LL;
  while ( *(_DWORD *)(v1 + 64) != 2 )
  {
    v1 = *(_QWORD *)v1;
    if ( !v1 )
      return 0LL;
  }
  return v1 & -(__int64)((*(_DWORD *)(v1 + 8) & 0x20) != 0);
}
