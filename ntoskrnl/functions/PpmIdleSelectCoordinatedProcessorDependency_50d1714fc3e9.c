__int64 __fastcall PpmIdleSelectCoordinatedProcessorDependency(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // rbx
  __int64 v11; // r10
  __int64 v12; // rsi

  v6 = 0LL;
  v11 = 2147483649LL;
  if ( *(_DWORD *)a5 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(a5 + 8);
      if ( *(_BYTE *)(v12 + 24 * v6 + 1) )
      {
        v11 = PpmIdleCheckProcessorStateEligibility(
                a1,
                a2,
                a3,
                a4,
                *(_DWORD *)(v12 + 24 * v6 + 4),
                PpmIdleCoordinatedMode == 0);
        if ( !v11 )
          break;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)a5 )
        return v11;
    }
    *a6 = *(_DWORD *)(v12 + 24 * v6 + 4);
  }
  return v11;
}
