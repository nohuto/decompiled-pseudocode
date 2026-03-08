/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C6438 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmHpChunkHeapProtect @ 0x1402E7198 (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1402E74A0 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     SmKmStoreReference @ 0x140356410 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14045D10A (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C0B6C (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C1458 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C16E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C1AC4 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x1405C2040 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C3534 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405C3EC0 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4210 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4B6C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1405C6224 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C62AC (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1405C6350 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1405C63DC (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C697C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x1405C6D88 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7158 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebp
  int v5; // r15d
  _DWORD *v6; // r14
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v15; // r8
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // edx
  unsigned int Stats; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  char v24; // bl
  int v25; // eax
  struct _EX_RUNDOWN_REF *v26; // rax

  v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v4 = -1;
  v5 = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)v3 & 7;
  if ( (a2 & 1) == 0 )
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle((__int64)(a1 + 718));
  if ( !v7 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd((__int64)(a1 + 10), v3);
    goto LABEL_64;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRemove((__int64)(a1 + 10), v3);
    goto LABEL_64;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve((__int64)(a1 + 10), (__int64)(a1 + 124), v3);
    goto LABEL_64;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats((__int64)a1, v3);
    goto LABEL_64;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore((__int64)a1, 0);
      v16 = 0;
      goto LABEL_65;
    }
    if ( (*(_DWORD *)(v3 + 8) & 7u) - 4 <= 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions((__int64)a1, v3);
      v4 = 0;
      goto LABEL_64;
    }
    goto LABEL_44;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion((__int64)a1 + ((*(_DWORD *)(v3 + 28) & 2) != 0 ? 2016LL : 80LL), v3);
        return 259;
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    v4 = 259;
    if ( *(_DWORD *)(v3 + 8) != 1 )
      v6 = (_DWORD *)v3;
    if ( !SmKmStoreReference(*(_QWORD *)(a1[3] + 6728LL), *(_DWORD *)(a1[3] + 6016LL)) )
    {
      v16 = -1073741431;
      goto LABEL_67;
    }
    v16 = 0;
    v17 = *(_DWORD *)(v3 + 8);
    v5 = 1;
    switch ( v17 )
    {
      case 1:
        v18 = *(_DWORD *)(v3 + 16);
        if ( v18 < 2 )
        {
          Stats = ST_STORE<SM_TRAITS>::StCompactionWorker((__int64)a1 + (v18 != 0 ? 2016LL : 80LL), -v18, v15);
        }
        else
        {
          if ( v18 != 2 )
          {
            switch ( v18 )
            {
              case 3u:
                ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions((__int64)(a1 + 10));
                break;
              case 4u:
                SmHpChunkHeapProtect((__int64)(a1 + 34), 0, 0);
                break;
              case 5u:
                ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup((__int64)(a1 + 10));
                break;
              case 6u:
                v16 = -1073741811;
                break;
            }
            goto LABEL_67;
          }
          Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker((__int64)(a1 + 10), 0, (__int64)(a1 + 118));
        }
        goto LABEL_64;
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh((__int64)(a1 + 10));
LABEL_64:
        v16 = Stats;
LABEL_65:
        if ( v16 == -1073741818 )
          ST_STORE<SM_TRAITS>::StEmptyStore((__int64)a1, 0);
LABEL_67:
        if ( v6 )
          ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup((__int64)a1, v6);
        if ( !v5 )
          goto LABEL_71;
        goto LABEL_70;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate((__int64)a1, v3);
        v6 = 0LL;
        goto LABEL_64;
      case 4:
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
          a1[249],
          2LL,
          (*(_WORD *)(v3 + 14) & 1) != 0 ? 200 : 2000,
          (*(_WORD *)(v3 + 14) & 1) != 0 ? 2000 : 30000);
LABEL_70:
        v26 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                          *(_QWORD *)(a1[3] + 6728LL),
                                          *(_DWORD *)(a1[3] + 6016LL) & 0x3FF);
        ExReleaseRundownProtection_0(v26 + 1);
LABEL_71:
        if ( v4 != -1 )
          return v4;
        return v16;
      case 5:
        _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
        goto LABEL_70;
      case 6:
        _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
        if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - a1[751]) >= 0x989680
          && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction((__int64)(a1 + 10), 2) == 2 )
        {
          ST_STORE<SM_TRAITS>::StCompactionPerformEmergency((__int64)(a1 + 10));
          a1[751] = KiQueryUnbiasedInterruptTime();
        }
        goto LABEL_70;
    }
LABEL_44:
    v16 = -1073741811;
    goto LABEL_65;
  }
  v20 = (__int64)(a1 + 10);
  v21 = v20;
  v22 = *(_DWORD *)(v3 + 8) & 7;
  if ( v22 )
  {
    if ( v22 == 1 )
    {
      ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(v20);
    }
    else if ( v22 == 3 )
    {
      v23 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v20, 0);
      if ( v23 )
        ST_STORE<SM_TRAITS>::StQueueCompaction(v20, v23);
    }
    else
    {
      while ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v21, 1) == 2 )
      {
        v24 = *(_BYTE *)(v20 + 1904);
        *(_BYTE *)(v20 + 1904) = v24 | 3;
        v25 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(v20, 0);
        *(_BYTE *)(v20 + 1904) ^= (*(_BYTE *)(v20 + 1904) ^ v24) & 3;
        if ( v25 < 0 )
          break;
        v21 = v20;
      }
    }
  }
  else
  {
    ST_STORE<SM_TRAITS>::StDmEtaRefresh(v20);
  }
  return 0;
}
