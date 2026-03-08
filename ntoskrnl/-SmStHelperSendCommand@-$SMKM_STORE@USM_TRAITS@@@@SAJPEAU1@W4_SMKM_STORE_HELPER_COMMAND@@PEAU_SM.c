/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1405BE808
 * Callers:
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405BE0E4 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1405BE970 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1405BF764 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1405C26A4 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     SmKmStoreHelperSendCommand @ 0x1402E6C84 (SmKmStoreHelperSendCommand.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6D0C (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405C9668 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, _OWORD *a3, unsigned int a4)
{
  __int64 *v4; // rbp
  __int64 v7; // r15
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v13; // zf
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v7 = 6360LL;
  if ( a2 != 4 )
    v7 = 6232LL;
  v9 = a1 + v7;
  v10 = SmKmStoreHelperSendCommand(v9, a2, a3, a4 & 1);
  if ( v10 != -1073741650 )
  {
    if ( (a4 & 2) == 0 )
    {
      v11 = -1000000LL;
      if ( *(_BYTE *)(a1 + 6022) > 1u )
        v11 = -5000000LL;
      v15 = v11;
      if ( (a4 & 8) != 0 )
        v15 = v11 / 4;
      v4 = &v15;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
      KeAbPostRelease(a1 + 6024);
      CurrentThread = KeGetCurrentThread();
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v13
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v10 = SmKmStoreHelperWaitForCommand(v9, a3, v4, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v10;
}
