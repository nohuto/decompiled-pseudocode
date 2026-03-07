unsigned __int64 __fastcall KiUpdateXSaveSizeAndVolatileFeatures(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned int v4; // r11d
  unsigned __int64 v5; // r10
  unsigned __int64 i; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 j; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 k; // r9
  unsigned int v12; // r10d
  int v13; // eax

  v1 = *a1;
  *((_DWORD *)a1 + 4) = 576;
  v2 = 2;
  *((_DWORD *)a1 + 138) = 576;
  *((_DWORD *)a1 + 208) = 576;
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
  {
    v4 = 2;
    v5 = a1[68] >> 2;
    for ( i = v1 >> 2; i; i >>= 1 )
    {
      if ( v4 >= 0x40 )
        break;
      if ( (i & 1) != 0 )
      {
        if ( (v5 & 1) != 0 )
          *((_DWORD *)a1 + 4) = (*((_DWORD *)a1 + 4) + 63) & 0xFFFFFFC0;
        LODWORD(a1[v4 + 3]) = *((_DWORD *)a1 + 4);
        *((_DWORD *)a1 + 4) += HIDWORD(a1[v4 + 3]);
      }
      v5 >>= 1;
      ++v4;
    }
    v7 = (a1[67] | *a1) >> 2;
    for ( j = a1[68] >> 2; v7; v7 >>= 1 )
    {
      if ( v2 >= 0x40 )
        break;
      if ( (v7 & 1) != 0 )
      {
        if ( (j & 1) != 0 )
          *((_DWORD *)a1 + 138) = (*((_DWORD *)a1 + 138) + 63) & 0xFFFFFFC0;
        *((_DWORD *)a1 + 138) += *((_DWORD *)a1 + v2 + 139);
        if ( v2 != 18 )
        {
          if ( (j & 1) != 0 )
            *((_DWORD *)a1 + 208) = (*((_DWORD *)a1 + 208) + 63) & 0xFFFFFFC0;
          *((_DWORD *)a1 + 208) += *((_DWORD *)a1 + v2 + 139);
        }
      }
      j >>= 1;
      ++v2;
    }
  }
  else
  {
    for ( k = 0LL; v1; v1 >>= 1 )
    {
      if ( (unsigned int)k >= 0x40 )
        break;
      if ( (v1 & 1) != 0 )
      {
        v12 = HIDWORD(a1[k + 3]) + LODWORD(a1[k + 3]);
        if ( *((_DWORD *)a1 + 4) < v12 )
          *((_DWORD *)a1 + 4) = v12;
      }
      k = (unsigned int)(k + 1);
    }
    v13 = *((_DWORD *)a1 + 4);
    *((_DWORD *)a1 + 138) = v13;
    *((_DWORD *)a1 + 208) = v13;
  }
  v9 = *a1;
  a1[103] &= *a1;
  a1[1] = v9 & 0xBFFFFFFFFFFFFFEFuLL;
  result = a1[67] & 0x800;
  a1[102] = result;
  return result;
}
