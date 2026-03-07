unsigned __int8 __fastcall PpmDeepestHardwareIdleState(__int64 a1)
{
  unsigned __int8 v1; // dl
  unsigned int v2; // eax
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // cl

  v1 = 1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 40);
    if ( v2 )
    {
      v3 = (unsigned __int8 *)(a1 + 1448);
      v4 = v2;
      do
      {
        v5 = *v3;
        v3 += 344;
        if ( v5 <= v1 )
          v5 = v1;
        v1 = v5;
        --v4;
      }
      while ( v4 );
    }
  }
  return v1;
}
