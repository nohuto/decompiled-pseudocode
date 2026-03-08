/*
 * XREFs of HalpQueryProfileInformation @ 0x140861248
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050532C (HalpCollectProfileCorruptionStatus.c)
 *     HalpCollectProfileOwnershipStatus @ 0x140505470 (HalpCollectProfileOwnershipStatus.c)
 *     HalpQueryProfileSource @ 0x140505B3C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140505CD8 (HalpQueryProfileSourceList.c)
 */

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
