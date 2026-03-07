__int64 __fastcall CmpFindSubKeyByHashWithStatus(ULONG_PTR a1, __int64 a2, __m128i *a3, _DWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  unsigned __int16 v10; // si
  int v12; // eax

  v8 = CmpHashUnicodeComponent(a3);
  *a4 = -1;
  v9 = v8;
  v10 = 0;
  if ( !*(_WORD *)(a2 + 2) )
    return 3221225524LL;
  while ( 1 )
  {
    if ( v9 != *(_DWORD *)(a2 + 8LL * v10 + 8) )
      goto LABEL_3;
    v12 = CmpDoCompareKeyName(a1, (const UNICODE_STRING *)a3, 0LL, *(_DWORD *)(a2 + 8LL * v10 + 4));
    if ( v12 == 2 )
      return 3221225626LL;
    if ( !v12 )
    {
      *a4 = *(_DWORD *)(a2 + 8LL * v10 + 4);
      return 0LL;
    }
LABEL_3:
    if ( ++v10 >= *(_WORD *)(a2 + 2) )
      return 3221225524LL;
  }
}
