__int64 __fastcall WdipSemGetGuidKey(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rbx
  unsigned int v4; // r10d
  unsigned __int8 *v5; // r8
  int v6; // ecx

  v2 = 0;
  if ( a1 && a2 )
  {
    v3 = 8LL;
    v4 = *(_DWORD *)a1
       + ((320411091 * *(unsigned __int16 *)(a1 + 6) + 1) & 0xFFFF0000 | ((12345
                                                                         - 393795277
                                                                         * (unsigned int)*(unsigned __int16 *)(a1 + 6)) >> 16))
       + ((320411091 * *(unsigned __int16 *)(a1 + 4) + 1) & 0xFFFF0000 | ((12345
                                                                         - 393795277
                                                                         * (unsigned int)*(unsigned __int16 *)(a1 + 4)) >> 16));
    v5 = (unsigned __int8 *)(a1 + 8);
    do
    {
      v6 = *v5++;
      v4 += (320411091 * v6 + 1) & 0xFFFF0000 | ((unsigned int)(12345 - 393795277 * v6) >> 16);
      --v3;
    }
    while ( v3 );
    *a2 = ((69069 * v4 + 1) & 0xFFFF0000 | ((1103515245 * v4 + 12345) >> 16)) % 0x7FFFFFFF;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
