/*
 * XREFs of SymCryptFdefRawSetValue @ 0x1403FFF38
 * Callers:
 *     SymCryptFdefModElementSetValueGeneric @ 0x1403FE7A4 (SymCryptFdefModElementSetValueGeneric.c)
 *     SymCryptFdefIntSetValue @ 0x1403FFD9C (SymCryptFdefIntSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawSetValue(unsigned __int8 *a1, __int64 a2, int a3, _DWORD *a4, int a5)
{
  __int64 v7; // r11
  unsigned int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // r9d
  unsigned int i; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax

  v7 = a2;
  v8 = 16 * a5;
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 32782;
    a1 = &a1[a2 - 1];
    v11 = -1LL;
  }
  else
  {
    v11 = 1LL;
  }
  v10 = 0;
  if ( v8 )
  {
    v12 = v8;
    do
    {
      v13 = 0;
      for ( i = 0; i < 0x20; i += 8 )
      {
        if ( v7 )
        {
          --v7;
          v15 = *a1 << i;
          a1 += v11;
          v13 |= v15;
        }
      }
      *a4++ = v13;
      --v12;
    }
    while ( v12 );
  }
  v16 = 0;
  if ( v7 )
  {
    do
    {
      v17 = *a1;
      a1 += v11;
      v16 |= v17;
      --v7;
    }
    while ( v7 );
    if ( v16 )
      return 32781;
  }
  return v10;
}
