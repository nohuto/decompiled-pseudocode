__int64 __fastcall ACPISystemPowerDetermineSupportedSystemState(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 *v4; // rdx
  int v5; // ecx

  v2 = 0;
  v3 = 7;
  if ( a2 != 4 )
  {
    v4 = *(__int64 **)(a1 + 8LL * a2 + 408);
    while ( v4 )
    {
      v5 = *((_DWORD *)v4 + 4);
      v4 = (__int64 *)*v4;
      if ( v5 >= v3 )
        v5 = v3;
      v3 = v5;
    }
  }
  if ( v3 != 7 )
    return (unsigned int)v3;
  return v2;
}
