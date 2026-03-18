/*
 * XREFs of SmFpCleanup @ 0x1402376C4
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmFpPreAllocate @ 0x1403D735C (SmFpPreAllocate.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405F71B0 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     SmKmFreeMdlForLock @ 0x14037DC94 (SmKmFreeMdlForLock.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpCleanup(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rbp
  void **v3; // rsi
  void **v4; // rdi

  v1 = 0;
  v2 = (unsigned __int16 *)(a1 + 88);
  v3 = (void **)(a1 + 32);
  do
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      if ( !*v3 )
        break;
      *v3 = *v4;
      if ( v1 < 5 )
      {
        if ( v1 == 2 )
        {
          SmKmFreeMdlForLock(v4[1]);
        }
        else if ( v1 == 3 )
        {
          SmAcquireReleaseCharges((unsigned __int64)*v2 << 12, 1LL, 1LL);
        }
        else
        {
          ExFreePoolWithTag(v4[1], 0);
        }
      }
      else
      {
        MmFreeMappingAddress(v4[1], 0x6D526D73u);
      }
      ExFreePoolWithTag(v4, 0);
    }
    ++v1;
    ++v3;
    ++v2;
  }
  while ( v1 < 6 );
}
