/*
 * XREFs of MiImageGetRawRvaState @ 0x140773A3C
 * Callers:
 *     MiImageRvaRawEnumFirst @ 0x140773990 (MiImageRvaRawEnumFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageGetRawRvaState(_DWORD *a1, int a2)
{
  unsigned int v2; // r10d
  _DWORD *v3; // rax
  unsigned int v4; // r8d
  int v7; // r9d
  __int64 v8; // r11
  unsigned int v9; // ecx
  _DWORD *v10; // rdx

  v2 = a1[36];
  v3 = a1 + 38;
  v4 = 0;
  v7 = 0;
  if ( v2 )
  {
    v8 = v2;
    do
    {
      if ( *v3 == a2 )
        v7 |= v3[1];
      v3 += 10;
      --v8;
    }
    while ( v8 );
    v9 = 0;
    v10 = a1 + 32;
    do
    {
      if ( (v7 & *v10) != 0 )
        v4 |= 1 << v9;
      ++v9;
      ++v10;
    }
    while ( v9 < v2 );
  }
  return v4;
}
