/*
 * XREFs of AslpFileStringTokenize @ 0x1402467B0
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1406D5020 (AslpFileVerQueryBlock.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  __int16 i; // r8
  const WCHAR *v5; // r9
  WCHAR v6; // dx
  _WORD *v7; // r11
  _WORD *v8; // rdi
  const WCHAR *v9; // r9
  WCHAR v10; // dx
  WCHAR v11; // r8
  _WORD *v12; // r8

  if ( !a3 )
    return 0LL;
  if ( !a1 )
  {
    a1 = *a3;
    if ( !*a3 )
      return 0LL;
  }
  for ( i = *a1; i; ++a1 )
  {
    v5 = L"\\";
    if ( !asc_14000E89C[0] )
      break;
    v6 = asc_14000E89C[0];
    while ( v6 != i )
    {
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_9;
    }
    i = a1[1];
  }
LABEL_9:
  v7 = a1;
  v8 = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v9 = L"\\";
      v10 = asc_14000E89C[0];
      if ( asc_14000E89C[0] )
      {
        v11 = asc_14000E89C[0];
        do
        {
          v10 = v11;
          if ( v11 == *a1 )
            break;
          v10 = v9[1];
          ++v9;
          v11 = v10;
        }
        while ( v10 );
      }
      v12 = a1 + 1;
      if ( v10 )
        break;
      ++a1;
      if ( !*v12 )
        goto LABEL_18;
    }
    *a1++ = 0;
  }
LABEL_18:
  *a3 = a1;
  if ( a1 == v8 )
    return 0LL;
  return v7;
}
