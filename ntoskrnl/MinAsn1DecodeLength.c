/*
 * XREFs of MinAsn1DecodeLength @ 0x140A6E6E4
 * Callers:
 *     MinAsn1ExtractContent @ 0x140A6EA28 (MinAsn1ExtractContent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MinAsn1DecodeLength(_DWORD *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // eax
  unsigned __int8 v6; // al
  int v7; // ecx
  unsigned __int8 *v8; // r8
  int v9; // r11d
  int v10; // edx
  int v11; // eax

  v3 = 1;
  if ( !a3 )
    return (unsigned int)-2;
  v5 = *a2;
  if ( (_BYTE)v5 == 0x80 )
    return (unsigned int)-3;
  if ( (v5 & 0x80u) == 0 )
  {
    *a1 = v5;
    return v3;
  }
  v6 = v5 & 0x7F;
  if ( v6 > 4u )
    return (unsigned int)-1;
  v7 = v6;
  if ( v6 >= a3 )
    return (unsigned int)-2;
  *a1 = 0;
  v8 = a2 + 1;
  v9 = v6;
  if ( v6 )
  {
    v10 = 0;
    do
    {
      v11 = *v8;
      --v9;
      ++v8;
      v10 = v11 + (v10 << 8);
      *a1 = v10;
    }
    while ( v9 > 0 );
  }
  return (unsigned int)(v7 + 1);
}
