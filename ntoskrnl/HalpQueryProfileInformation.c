__int64 __fastcall HalpQueryProfileInformation(int a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // eax

  switch ( a1 )
  {
    case 1:
      return HalpQueryProfileSource(a2, a3, a4);
    case 20:
      return HalpQueryProfileSourceList(a2, a3, a4);
    case 44:
      if ( (unsigned int)a2 >= 4 )
      {
        if ( (_DWORD)a2 == 4 )
        {
          v4 = HalpNumberOfCounters;
          *a4 = 4;
          *(_DWORD *)a3 = v4;
          return 0LL;
        }
        if ( (unsigned int)a2 >= 8 )
        {
          *(_DWORD *)a3 = HalpNumberOfGpCounters;
          *(_DWORD *)(a3 + 4) = HalpNumberOfFixedCounters;
          *a4 = 8;
          return 0LL;
        }
      }
      *a4 = 8;
      return 3221225476LL;
    case 51:
      return HalpCollectProfileCorruptionStatus((unsigned int **)a3, a2, a4);
    case 52:
      return HalpCollectProfileOwnershipStatus((_DWORD *)a3, a2, a4);
    default:
      return HalpProfileInterface[4]();
  }
}
