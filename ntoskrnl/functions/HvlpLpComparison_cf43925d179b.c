__int64 __fastcall HvlpLpComparison(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  v4 = *(_DWORD *)(a2 + 40LL * a3 + 16);
  if ( v4 >= *(_DWORD *)(a2 + 40LL * a4 + 16) )
  {
    if ( v4 > *(_DWORD *)(a2 + 40LL * a4 + 16) )
      return 1LL;
    v5 = *(_DWORD *)(a2 + 40LL * a3 + 20);
    if ( v5 >= *(_DWORD *)(a2 + 40LL * a4 + 20) )
    {
      if ( v5 > *(_DWORD *)(a2 + 40LL * a4 + 20) )
        return 1LL;
      v6 = *(_DWORD *)(a2 + 40LL * a3 + 24);
      if ( v6 <= *(_DWORD *)(a2 + 40LL * a4 + 24) )
      {
        if ( v6 < *(_DWORD *)(a2 + 40LL * a4 + 24) )
          return 1LL;
        v7 = *(_DWORD *)(a2 + 40LL * a3 + 28);
        if ( v7 <= *(_DWORD *)(a2 + 40LL * a4 + 28) )
        {
          if ( v7 < *(_DWORD *)(a2 + 40LL * a4 + 28) )
            return 1LL;
          v8 = *(_DWORD *)(a2 + 40LL * a3 + 32);
          if ( v8 <= *(_DWORD *)(a2 + 40LL * a4 + 32) )
          {
            if ( v8 >= *(_DWORD *)(a2 + 40LL * a4 + 32) )
            {
              if ( a3 >= a4 )
                return a3 > a4;
              return 0xFFFFFFFFLL;
            }
            return 1LL;
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
