/*
 * XREFs of XmShlOp @ 0x1403B1970
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmShlOp(_DWORD *a1)
{
  int v1; // eax
  unsigned int v3; // r10d
  int v4; // ecx
  char v5; // di
  unsigned int v6; // r9d
  int v7; // edx
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  char v10; // al
  unsigned int v11; // r11d

  v1 = a1[30];
  v3 = a1[26];
  v4 = a1[27];
  v5 = 8 * v1 + 7;
  if ( v4 )
  {
    v6 = v3 ^ (v3 >> 1);
    v7 = v3 << v4;
    if ( v1 == 3 )
    {
      v9 = v6 >> 30;
      LOBYTE(v11) = v3 >> (32 - v4);
      v3 <<= v4;
    }
    else
    {
      v8 = v3;
      if ( v1 == 1 )
      {
        v9 = v6 >> 14;
        v10 = 16;
        v3 = (unsigned __int16)v7;
      }
      else
      {
        v9 = v6 >> 6;
        v10 = 8;
        v3 = (unsigned __int8)v7;
      }
      v11 = v8 >> (v10 - v4);
    }
    a1[4] = v11 & 1 | a1[4] & 0xFFFFF73A | (v3 == 0 ? 0x40 : 0) | (4
                                                                 * ((32 * ((16 * (v9 & 1)) | (v3 >> v5) & 1)) | (((*((_BYTE *)XmBitCount + (v3 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v3 >> 4))) & 1) == 0)));
  }
  return XmStoreResult(a1, v3);
}
