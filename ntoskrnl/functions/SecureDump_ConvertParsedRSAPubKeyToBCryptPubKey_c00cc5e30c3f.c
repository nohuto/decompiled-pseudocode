__int64 __fastcall SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey(__int64 a1, _DWORD *a2)
{
  size_t v2; // rbx
  unsigned int v4; // edi
  unsigned int v5; // edx
  _BYTE *v6; // rsi
  _BYTE *v7; // rbp

  v2 = *(unsigned int *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = -1073740760;
  v6 = *(_BYTE **)(a1 + 40);
  v7 = *(_BYTE **)(a1 + 56);
  if ( (unsigned int)v2 <= 0x204 && v4 <= 0x204 && (unsigned int)v2 + v4 <= 0x204 )
  {
    if ( v4 > 1 && !*v6 )
    {
      ++v6;
      --v4;
    }
    if ( v4 <= 0x200 )
    {
      if ( (unsigned int)v2 > 1 && !*v7 )
      {
        ++v7;
        v2 = (unsigned int)(v2 - 1);
      }
      if ( (unsigned int)v2 <= 4 && v4 && (_DWORD)v2 )
      {
        memset(a2 + 4, 0, 0x20CuLL);
        *a2 = 826364754;
        a2[1] = 8 * v4;
        a2[2] = v2;
        a2[3] = v4;
        memmove(a2 + 6, v7, v2);
        memmove((char *)a2 + v2 + 24, v6, v4);
        return 0;
      }
    }
  }
  return v5;
}
