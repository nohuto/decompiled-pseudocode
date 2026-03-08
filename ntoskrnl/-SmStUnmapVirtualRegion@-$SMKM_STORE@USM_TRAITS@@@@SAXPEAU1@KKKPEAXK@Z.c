/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405BFFD4
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1405BE1E0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405BEF00 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405BF358 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405BFCAC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1405C5EE4 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1405C6784 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1405C718C (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     SmAcquireReleaseCharges @ 0x140359F14 (SmAcquireReleaseCharges.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x1405BE7AC (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     SmKmUnlockMdl @ 0x1405C9ACC (SmKmUnlockMdl.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  signed __int64 *v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  int v11; // r15d
  __int64 v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  PMDL *VirtualLockedRegion; // rdi
  unsigned __int16 v15; // ax
  struct _KTHREAD *v16; // rax

  v6 = *(_QWORD *)(a1 + 6216);
  v7 = (signed __int64 *)(a1 + 6024);
  v8 = *(unsigned int *)(a1 + 6208);
  v9 = a2;
  v11 = 0;
  v12 = *(_QWORD *)(v6 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)(v6 + 8 * v9) >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v12);
      SmKmUnlockMdl(*VirtualLockedRegion);
      SmFpFree(*(_QWORD *)(a1 + 6480), 2, a1 + 6360, *VirtualLockedRegion);
      *VirtualLockedRegion = 0LL;
    }
    goto LABEL_16;
  }
  if ( (a6 & 2) != 0 )
  {
    v15 = 0x7FFF;
LABEL_8:
    _InterlockedAnd16((volatile signed __int16 *)(v6 + 8 * v9), v15);
    goto LABEL_16;
  }
  if ( (a6 & 1) != 0 )
    goto LABEL_16;
  if ( _bittest16((const signed __int16 *)(v6 + 8 * v9), 0xDu)
    && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 6488) )
  {
    v15 = -8193;
    goto LABEL_8;
  }
  if ( (_InterlockedDecrement16((volatile signed __int16 *)(v6 + 8 * v9)) & 0x1FFF) == 0
    && *(__int64 *)(v6 + 8 * v9) >= 0 )
  {
    SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), v8, 1, 1);
  }
LABEL_16:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v16 = KeGetCurrentThread();
    if ( v16->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
