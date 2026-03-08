/*
 * XREFs of xtow @ 0x1403D38E4
 * Callers:
 *     _itow @ 0x1403D3890 (_itow.c)
 *     _ultow @ 0x1403D38C0 (_ultow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xtow(unsigned int a1, __int16 *a2, unsigned int a3, int a4)
{
  __int16 *v5; // r10
  unsigned int v6; // r11d
  __int16 *v7; // r8
  __int16 *v8; // r9
  unsigned int v9; // ecx
  _WORD *v10; // rdx
  __int16 v11; // ax
  __int64 result; // rax
  __int16 v13; // cx

  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -a1;
  }
  v7 = v5;
  do
  {
    v8 = v5;
    v9 = v6 % a3;
    v10 = v5 + 1;
    v6 /= a3;
    v11 = 87;
    if ( v9 <= 9 )
      v11 = 48;
    *v5++ = v9 + v11;
  }
  while ( v6 );
  *v10 = 0;
  do
  {
    result = (unsigned __int16)*v7;
    v13 = *v8;
    *v8-- = result;
    *v7++ = v13;
  }
  while ( v7 < v8 );
  return result;
}
