/*
 * XREFs of KappxParseString @ 0x1C02C5F94
 * Callers:
 *     KappxParsePackageFullNameFromToken @ 0x1C02C5E68 (KappxParsePackageFullNameFromToken.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

__int64 __fastcall KappxParseString(void *Src, unsigned __int16 a2, __int64 a3)
{
  void *v5; // rcx
  unsigned __int16 v6; // di
  size_t v8; // rbx
  __int16 v9; // ax

  if ( a3 )
  {
    v5 = *(void **)(a3 + 8);
    v6 = 2 * (a2 + 1);
    if ( v5 )
    {
      if ( *(_WORD *)(a3 + 2) < v6 )
        return 3221225485LL;
      v8 = 2LL * a2;
      memmove(v5, Src, v8);
      *(_WORD *)(v8 + *(_QWORD *)(a3 + 8)) = 0;
      v9 = v6 - 2;
      if ( v6 <= 2u )
        v9 = 0;
      *(_WORD *)a3 = v9;
    }
    else
    {
      *(_WORD *)(a3 + 2) = v6;
    }
  }
  return 0LL;
}
