/*
 * XREFs of ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800F3C6C
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE638 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_rfind<std::char_traits<unsigned short>>(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  char *v10; // rax
  signed __int64 i; // r9
  unsigned __int64 v12; // r11
  const wchar_t *v13; // rdx
  wchar_t v14; // bx
  int v15; // edx

  v6 = -1LL;
  if ( !a5 )
  {
    if ( a2 != -1LL )
      return a2;
    return v6;
  }
  if ( a5 > a2 )
    return v6;
  v8 = a2 - a5;
  v9 = -1LL;
  if ( v8 != -1 )
    v9 = v8;
  v10 = &a1[2 * v9];
  for ( i = v10 - (char *)L":"; ; i -= 2LL )
  {
    if ( *(_WORD *)v10 == 58 )
    {
      v12 = a5;
      v13 = L":";
      while ( 1 )
      {
        v14 = *(const wchar_t *)((char *)v13 + i);
        if ( v14 != *v13 )
          break;
        ++v13;
        if ( !--v12 )
        {
          v15 = 0;
          goto LABEL_14;
        }
      }
      v15 = v14 < *v13 ? -1 : 1;
LABEL_14:
      if ( !v15 )
        break;
    }
    if ( v10 == a1 )
      return v6;
    v10 -= 2;
  }
  return (v10 - a1) >> 1;
}
