/*
 * XREFs of ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020031C
 * Callers:
 *     SmSwapStore @ 0x14067E484 (SmSwapStore.c)
 * Callees:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1405BDE60 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax

  if ( (*a2 & 0x40000) == 0 )
    return 3221225659LL;
  if ( a3 > 1
    || (result = ((__int64 (*)(void))SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance)(), (int)result >= 0)
    && (a3 || (result = SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(a1, a2, 2LL), (int)result >= 0)) )
  {
    result = SMKM_STORE<SM_TRAITS>::SmStSwapStore(a2, a3);
    if ( (int)result >= 0 )
    {
      if ( a3 == 2 )
        SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(a1, a2, 3LL);
      return 0LL;
    }
  }
  return result;
}
