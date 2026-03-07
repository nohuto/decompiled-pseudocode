__int64 __fastcall PpmIdleUpdateCoordinatedDependencies(_DWORD *a1)
{
  unsigned int v1; // edx
  bool v3; // zf
  unsigned int v4; // r10d
  int v5; // r11d
  __int64 v6; // r9
  unsigned int i; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v1 = 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (HvlEnlightenments & 0x10000000) != 0 )
      return v1;
    v3 = (HvlEnlightenments & 0x400) == 0;
  }
  else
  {
    v3 = HvlHypervisorConnected == 0;
  }
  if ( !v3 )
  {
    v4 = 0;
    v5 = HvlEnlightenments & 0x200;
    if ( *a1 )
    {
      while ( 1 )
      {
        v6 = 80LL * v4;
        if ( !LOBYTE(a1[v6 + 88]) )
          return (unsigned int)-1073741637;
        for ( i = 0; i < a1[v6 + 87]; *(_BYTE *)(v9 + 3) = 1 )
        {
          v8 = *(_QWORD *)&a1[v6 + 90] + 16LL * i;
          if ( *(_DWORD *)v8 == -1 || !*(_DWORD *)(v8 + 4) )
            return (unsigned int)-1073741637;
          *(_DWORD *)(v8 + 4) = 1;
          v9 = *(_QWORD *)(v8 + 8);
          ++i;
          *(_BYTE *)v9 = v5 != 0;
          *(_WORD *)(v9 + 1) = 257;
        }
        if ( ++v4 >= *a1 )
          return v1;
      }
    }
  }
  return v1;
}
