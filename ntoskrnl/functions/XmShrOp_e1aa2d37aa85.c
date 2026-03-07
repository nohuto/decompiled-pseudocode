__int64 __fastcall XmShrOp(_DWORD *a1)
{
  int v1; // edx
  unsigned int v3; // r9d
  int v4; // ecx
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  int v8; // eax

  v1 = a1[30];
  v3 = a1[26];
  v4 = a1[27];
  if ( v4 )
  {
    v5 = v3 >> v4;
    v6 = v3 >> (v4 - 1);
    if ( v1 == 3 )
    {
      v7 = v3 >> 31;
    }
    else if ( v1 == 1 )
    {
      v7 = v3 >> 15;
    }
    else
    {
      v7 = v3 >> 7;
    }
    v8 = (16 * (v7 & 1)) | (v5 >> (8 * v1 + 7)) & 1;
    v3 = v5;
    a1[4] = v6 & 1 | a1[4] & 0xFFFFF73A | (v5 == 0 ? 0x40 : 0) | (4
                                                                * ((32 * v8) | (((*((_BYTE *)XmBitCount + (v5 & 0xF))
                                                                                + *((_BYTE *)XmBitCount
                                                                                  + ((unsigned __int8)v5 >> 4))) & 1) == 0)));
  }
  return XmStoreResult(a1, v3);
}
