__int64 __fastcall RtlpMuiRegGetStringIndexInPool(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // edi
  __int64 i; // rbp
  const wchar_t *v6; // rcx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 2LL )
  {
    v6 = (const wchar_t *)(*(_QWORD *)(a1 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(a1 + 16) + i));
    if ( v6 == a2 || !wcsicmp(v6, a2) )
      break;
    if ( (int)++v4 >= *(unsigned __int16 *)(a1 + 6) )
      return 0xFFFFFFFFLL;
  }
  return v4;
}
