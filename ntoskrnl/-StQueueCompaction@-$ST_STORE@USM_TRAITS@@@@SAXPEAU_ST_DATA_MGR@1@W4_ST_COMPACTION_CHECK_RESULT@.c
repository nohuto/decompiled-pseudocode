/*
 * XREFs of ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x1405C6D88
 * Callers:
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C1AC4 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1405C6350 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StQueueCompaction(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  bool v3; // zf
  char v4; // dl
  char v5; // dl
  unsigned int v6; // r9d
  unsigned int v7; // r8d

  v2 = (*(_DWORD *)(a1 + 832) >> 1) & 1;
  v3 = a2 == 1;
  v4 = *(_BYTE *)(a1 + 1904);
  if ( v3 )
  {
    v5 = v4 & 0xFC | 1;
    v6 = -2;
    v7 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 400 : 30;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v5 = v4 & 0xFC | 2;
  }
  *(_BYTE *)(a1 + 1904) = v5;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), v2, v7, v6);
}
