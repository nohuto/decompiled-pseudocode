/*
 * XREFs of GreGetRasterizerCaps @ 0x1C02D7760
 * Callers:
 *     NtGdiGetRasterizerCaps @ 0x1C02C5C20 (NtGdiGetRasterizerCaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRasterizerCaps(Gre::Base *a1)
{
  __int16 v1; // di
  struct Gre::Base::SESSION_GLOBALS *v4; // rax

  HIBYTE(v1) = 0;
  if ( a1 )
  {
    *(_DWORD *)a1 = 131078;
    v4 = Gre::Base::Globals(a1);
    LOBYTE(v1) = *((_DWORD *)v4 + 40) != 0;
    *((_WORD *)a1 + 1) |= v1;
    *((_WORD *)a1 + 2) = *((_WORD *)v4 + 76);
    return 1LL;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
