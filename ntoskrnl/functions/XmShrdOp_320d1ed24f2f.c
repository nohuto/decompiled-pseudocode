_WORD *__fastcall XmShrdOp(__int64 a1)
{
  unsigned __int8 v1; // r11
  __int16 v2; // si
  int v3; // ebx
  unsigned int v4; // r10d
  unsigned int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned __int8 v8; // al

  v1 = *(_BYTE *)(a1 + 144);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(a1 + 104);
  if ( v1 )
  {
    if ( *(_DWORD *)(a1 + 120) == 3 )
    {
      if ( v1 == 1 )
        *(_DWORD *)(a1 + 16) ^= (*(_DWORD *)(a1 + 16) ^ (v3 << 11) ^ (v4 >> 20)) & 0x800;
      v5 = v4 >> (v1 - 1);
      v4 = (v4 >> v1) | (v3 << (32 - v1));
      v6 = v4 >> 31;
    }
    else
    {
      if ( v1 == 1 )
        *(_DWORD *)(a1 + 16) ^= (*(_DWORD *)(a1 + 16) ^ (v3 << 11) ^ (v4 >> 4)) & 0x800;
      v7 = (unsigned __int16)v3;
      v8 = v1 - 16;
      if ( v1 <= 0x10u )
      {
        v8 = v1;
        v7 = v4;
      }
      v5 = v7 >> (v8 - 1);
      if ( v1 <= 0x10u )
        v2 = v3;
      v4 = (unsigned __int16)((v7 >> v8) | (v2 << (16 - v8)));
      v6 = v4 >> 15;
    }
    *(_DWORD *)(a1 + 16) = v5 & 1 | *(_DWORD *)(a1 + 16) & 0xFFFFFF3A | (v4 == 0 ? 0x40 : 0) | (4
                                                                                              * ((32 * v6) | (((*((_BYTE *)XmBitCount + (v4 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v4 >> 4))) & 1) == 0)));
  }
  return XmStoreResult(a1, v4);
}
