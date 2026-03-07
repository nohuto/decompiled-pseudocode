char __fastcall ACPIBuildProcessDelayedDependencyShouldDelayRequest(__int64 a1)
{
  _QWORD *v1; // rsi
  char v2; // bl
  unsigned int i; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( (*(_DWORD *)(a1 + 20) & 0x20) == 0 )
    return 0;
  v1 = *(_QWORD **)(a1 + 40);
  v2 = 1;
  if ( (v1[1] & 0xA00000000000LL) == 0 )
  {
    v2 = 0;
    if ( !v1[81] || (unsigned __int8)AreDependenciesSatisfied(v1[95]) )
    {
      for ( i = 0; i <= 5; ++i )
      {
        if ( i > 4 )
          v4 = v1[56];
        else
          v4 = v1[i + 51];
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 8);
          if ( *(_QWORD *)(v5 + 96) )
          {
            if ( !(unsigned __int8)AreDependenciesSatisfied(*(_QWORD *)(v5 + 32)) )
              return 1;
          }
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
