/*
 * XREFs of xtoa @ 0x1403D3800
 * Callers:
 *     _itoa @ 0x1403D37D0 (_itoa.c)
 * Callees:
 *     <none>
 */

char __fastcall xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v5; // r10
  unsigned int v6; // r11d
  char *v7; // r8
  char *v8; // r9
  unsigned int v9; // ecx
  _BYTE *v10; // rdx
  char v11; // al
  char result; // al
  char v13; // cl

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
    result = *v7;
    v13 = *v8;
    *v8-- = *v7;
    *v7++ = v13;
  }
  while ( v7 < v8 );
  return result;
}
