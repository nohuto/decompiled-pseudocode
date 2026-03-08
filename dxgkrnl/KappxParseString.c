/*
 * XREFs of KappxParseString @ 0x1C039408C
 * Callers:
 *     KappxParsePackageFullNameFromToken @ 0x1C0393F60 (KappxParsePackageFullNameFromToken.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall KappxParseString(void *Src, unsigned __int16 a2, __int64 a3)
{
  void *v5; // rcx
  __int16 v6; // bp
  unsigned __int16 v7; // si
  size_t v9; // rbx

  if ( a3 )
  {
    v5 = *(void **)(a3 + 8);
    v6 = 2 * a2;
    v7 = 2 * a2 + 2;
    if ( v5 )
    {
      if ( *(_WORD *)(a3 + 2) < v7 )
        return 3221225485LL;
      v9 = 2LL * a2;
      memmove(v5, Src, v9);
      if ( v7 <= 2u )
        v6 = 0;
      *(_WORD *)(v9 + *(_QWORD *)(a3 + 8)) = 0;
      *(_WORD *)a3 = v6;
    }
    else
    {
      *(_WORD *)(a3 + 2) = v7;
    }
  }
  return 0LL;
}
