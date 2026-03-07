__int64 __fastcall ExpTranslateBootEntryNameToId(wint_t *a1, int *a2)
{
  wint_t *v5; // r14
  int v6; // edi
  unsigned int i; // esi
  wint_t v8; // ax
  int v9; // edi

  if ( towlower(*a1) != 98 || towlower(a1[1]) != 111 || towlower(a1[2]) != 111 || towlower(a1[3]) != 116 )
    return 0LL;
  v5 = a1 + 4;
  v6 = 0;
  for ( i = 4; i < 8; ++i )
  {
    v8 = towlower(*v5);
    if ( (unsigned __int16)(v8 - 48) > 9u )
    {
      if ( (unsigned __int16)(v8 - 97) > 5u )
        return 0LL;
      v9 = 16 * v6 - 87;
    }
    else
    {
      v9 = 16 * v6 - 48;
    }
    v6 = v8 + v9;
    ++v5;
  }
  if ( a1[8] )
    return 0LL;
  *a2 = v6;
  return 1LL;
}
