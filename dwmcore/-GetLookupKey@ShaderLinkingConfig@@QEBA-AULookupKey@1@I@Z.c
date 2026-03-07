_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  int v3; // r10d
  int v5; // edx
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // r9d
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // r9d
  int v14; // eax
  _OWORD *result; // rax
  int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int128 v20; // [rsp+0h] [rbp-18h]

  v20 = 0LL;
  v3 = 0;
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( *(_BYTE *)(a1 + 20) )
    {
      v16 = 5;
    }
    else if ( *(_BYTE *)(a1 + 21) )
    {
      v16 = 4;
    }
    else
    {
      v16 = 3;
    }
    v6 = v16 & 0xFFCFCFFF | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 12);
    v5 = v6;
  }
  else if ( *(_BYTE *)(a1 + 21) )
  {
    v6 = 1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( *(_BYTE *)(a1 + 23) )
    {
      v6 = 2;
      v5 = 2;
    }
    else
    {
      v6 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 50) )
  {
    if ( *(_BYTE *)(a1 + 52) )
    {
      v17 = v5 & 0xFFFFFFC7 | 0x28;
    }
    else if ( *(_BYTE *)(a1 + 53) )
    {
      v17 = v6 & 0xFFFFFFC7 | 0x20;
    }
    else
    {
      v17 = v6 & 0xFFFFFFC7 | 0x18;
    }
    v6 = v17 & 0xFF3F3FFF | ((*(_BYTE *)(a1 + 48) & 3 | ((*(_BYTE *)(a1 + 49) & 3) << 8)) << 14);
  }
  else if ( *(_BYTE *)(a1 + 53) )
  {
    v6 = v5 & 0xFFFFFFC7 | 8;
  }
  else if ( *(_BYTE *)(a1 + 55) )
  {
    v6 = v6 & 0xFFFFFFC7 | 0x10;
  }
  if ( *(_BYTE *)(a1 + 82) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      v18 = v6 & 0xFFFFFE3F | 0x140;
    }
    else if ( *(_BYTE *)(a1 + 85) )
    {
      v18 = v6 & 0xFFFFFE3F | 0x100;
    }
    else
    {
      v18 = v6 & 0xFFFFFE3F | 0xC0;
    }
    v6 = v18 & 0xFCFCFFFF | ((*(_BYTE *)(a1 + 80) & 3 | ((*(_BYTE *)(a1 + 81) & 3) << 8)) << 16);
  }
  else if ( *(_BYTE *)(a1 + 85) )
  {
    v6 = v6 & 0xFFFFFE3F | 0x40;
  }
  else if ( *(_BYTE *)(a1 + 87) )
  {
    v6 = v6 & 0xFFFFFE3F | 0x80;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    if ( *(_BYTE *)(a1 + 116) )
    {
      v19 = v6 & 0xFFFFF1FF | 0xA00;
    }
    else if ( *(_BYTE *)(a1 + 117) )
    {
      v19 = v6 & 0xFFFFF1FF | 0x800;
    }
    else
    {
      v19 = v6 & 0xFFFFF1FF | 0x600;
    }
    v6 = v19 & 0xF3F3FFFF | ((*(_BYTE *)(a1 + 112) & 3 | ((*(_BYTE *)(a1 + 113) & 3) << 8)) << 18);
  }
  else if ( *(_BYTE *)(a1 + 117) )
  {
    v6 = v6 & 0xFFFFF1FF | 0x200;
  }
  else if ( *(_BYTE *)(a1 + 119) )
  {
    v6 = v6 & 0xFFFFF1FF | 0x400;
  }
  v7 = 0;
  if ( *(_BYTE *)(a1 + 153) )
    v7 = 0x10000000;
  v8 = v7 | v6 & 0xEFFFFFFF;
  v9 = 0;
  v10 = (*(_BYTE *)(a1 + 155) != 0 ? 0x20000000 : 0) | v8 & 0xDFFFFFFF;
  if ( *(_BYTE *)(a1 + 156) )
    v9 = 0x80000000;
  v11 = v9 | v10 & 0x7FFFFFFF;
  v12 = 0;
  if ( *(_BYTE *)(a1 + 152) )
    v12 = 0x40000000;
  v13 = v12 | v11 & 0xBFFFFFFF;
  v14 = 0;
  DWORD1(v20) = v13;
  if ( *(_BYTE *)(a1 + 158) )
    v14 = 0x10000;
  if ( *(_BYTE *)(a1 + 159) )
    v3 = 0x20000;
  DWORD2(v20) = v3 | (a3 << 24) | v14 & 0xFD0000 | ((DWORD2(v20) ^ (*(_DWORD *)(a1 + 144) << 18)) & 0xFC0000 ^ DWORD2(v20)) & 0xFC0000 | *(unsigned __int16 *)(a1 + 128);
  result = a2;
  LODWORD(v20) = *(_DWORD *)(a1 + 8) & 0x3F | ((*(_DWORD *)(a1 + 40) & 0x3F | ((*(_DWORD *)(a1 + 72) & 0x3F | ((*(_DWORD *)(a1 + 104) & 0x3F | ((*(_BYTE *)(a1 + 25) & 1 | (2 * (*(_BYTE *)(a1 + 57) & 1 | (2 * (*(_BYTE *)(a1 + 89) & 1 | (2 * (*(_BYTE *)(a1 + 121) & 1 | (2 * (*(_BYTE *)(a1 + 24) & 1 | (2 * (*(_BYTE *)(a1 + 56) & 1 | (2 * (*(_BYTE *)(a1 + 88) & 1 | (2 * *(unsigned __int8 *)(a1 + 120))))))))))))))) << 6)) << 6)) << 6)) << 6);
  *a2 = v20;
  return result;
}
