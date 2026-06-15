/*
 * XREFs of sub_1800BB7C4 @ 0x1800BB7C4
 * Callers:
 *     sub_180071F6C @ 0x180071F6C (sub_180071F6C.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 */

__int64 __fastcall sub_1800BB7C4(__int64 a1, __int64 a2, char *a3, char **a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  char *v9; // rax

  v4 = -1LL;
  v6 = 0;
  do
    ++v4;
  while ( *(_WORD *)&a3[2 * v4] );
  v8 = v4 + 1;
  *a4 = 0LL;
  if ( v4 + 1 >= v4 && is_mul_ok(v8, 2uLL) )
  {
    v9 = (char *)CoTaskMemAlloc(2 * v8);
    *a4 = v9;
    if ( v9 )
      sub_18002A0F0(v9, v4 + 1, a3, v4);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v6;
}
