/*
 * XREFs of SmFpCleanup @ 0x140343E28
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403428E8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140342E58 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpPreAllocate @ 0x1403A6478 (SmFpPreAllocate.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405BE71C (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFirstTimeInit @ 0x1407B82C4 (SmFirstTimeInit.c)
 *     SmPartitionCleanup @ 0x1409D6C68 (SmPartitionCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14034350C (SmAcquireReleaseCharges.c)
 *     SmKmFreeMdlForLock @ 0x1405CB590 (SmKmFreeMdlForLock.c)
 *     MmFreeMappingAddress @ 0x14086DC40 (MmFreeMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpCleanup(__int64 a1)
{
  unsigned __int16 *v2; // r14
  unsigned int v3; // ebx
  void **v4; // rsi
  void **v5; // rdi

  v2 = (unsigned __int16 *)(a1 + 96);
  v3 = 0;
  v4 = (void **)(a1 + 40);
  do
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      if ( !*v4 )
        break;
      *v4 = *v5;
      if ( v3 < 5 )
      {
        if ( v3 == 2 )
        {
          SmKmFreeMdlForLock(*(_QWORD *)(a1 + 32), v5[1]);
        }
        else if ( v3 == 3 )
        {
          SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), (unsigned __int64)*v2 << 12, 1, 1);
        }
        else
        {
          ExFreePoolWithTag(v5[1], 0);
        }
      }
      else
      {
        MmFreeMappingAddress(v5[1], 0x6D526D73u);
      }
      ExFreePoolWithTag(v5, 0);
    }
    ++v3;
    ++v4;
    ++v2;
  }
  while ( v3 < 6 );
}
