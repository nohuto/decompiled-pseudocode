/*
 * XREFs of SerialNumberFromNvmeId @ 0x1C000D9BC
 * Callers:
 *     FormInquirySerialNumberData @ 0x1C000D738 (FormInquirySerialNumberData.c)
 * Callees:
 *     HexFromUchar @ 0x1C000DAD8 (HexFromUchar.c)
 */

__int64 __fastcall SerialNumberFromNvmeId(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // r9d
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // r9
  __int64 v17; // rax

  v4 = a4;
  v5 = a3;
  v6 = a1;
  if ( (a2 >> 1) + 2 * a2 > a4 || (a2 & 1) != 0 )
    return 3238002694LL;
  v7 = 0LL;
  v8 = a2 - 1;
  v9 = 0;
  if ( a2 != 1 )
  {
    do
    {
      LOBYTE(a1) = *(_BYTE *)(v7 + v6);
      HexFromUchar(a1, v5 + v9, v4 - v9);
      v11 = (unsigned int)(v7 + 1);
      LOBYTE(v14) = *(_BYTE *)(v11 + v6);
      HexFromUchar(v14, v13 + (unsigned int)(v10 + 2), (unsigned int)(v12 - (v10 + 2)));
      v16 = (unsigned int)(v15 + 2);
      v7 = (unsigned int)(v11 + 1);
      v17 = (unsigned int)v16;
      *(_BYTE *)(v16 + v5) = 95;
      v9 = v16 + 1;
    }
    while ( (unsigned int)v7 < v8 );
    if ( v9 )
    {
      if ( v9 <= v4 )
        *(_BYTE *)(v17 + v5) = 46;
    }
  }
  return 0LL;
}
