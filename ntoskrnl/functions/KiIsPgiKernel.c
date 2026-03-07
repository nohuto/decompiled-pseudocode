char KiIsPgiKernel()
{
  _DWORD *v0; // r8
  _DWORD *i; // r9
  int v2; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // rdx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v0 = (_DWORD *)RtlImageDirectoryEntryToData(0x40000000, 1, 6, (int)&v6);
  if ( v0 )
  {
    for ( i = &v0[7 * (v6 / 0x1CuLL)]; v0 < i; v0 += 7 )
    {
      v2 = v0[3];
      if ( v2 == 10 )
      {
        v4 = (_DWORD *)(0x140000000LL + (unsigned int)v0[5]);
        v5 = &v4[(unsigned __int64)(unsigned int)v0[4] >> 2];
        while ( v4 < v5 )
        {
          if ( *v4 == 1346849024 )
            return 1;
          ++v4;
        }
      }
      else if ( v2 == 13 && v0[4] >= 0x10u && *(_DWORD *)((unsigned int)v0[5] + 0x140000000LL) == 1346849024 )
      {
        return 1;
      }
    }
  }
  return 0;
}
