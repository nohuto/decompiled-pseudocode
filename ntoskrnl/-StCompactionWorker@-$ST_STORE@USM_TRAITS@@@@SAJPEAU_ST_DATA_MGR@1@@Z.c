/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C1AC4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C16E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x1405C2040 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x1405C6D88 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v5; // eax
  int v6; // edi
  __int64 v7; // r8

  v3 = *(_BYTE *)(a1 + 1904);
  if ( (v3 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 1904) = v3 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 1904) = v3 & 0xFC;
    v5 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, a3);
    if ( v5 != 2 )
    {
LABEL_3:
      v6 = 0;
      goto LABEL_11;
    }
  }
  *(_BYTE *)(a1 + 1904) |= 3u;
  while ( 1 )
  {
    v6 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1);
    v5 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, v7);
    if ( v6 < 0 )
      break;
    if ( v5 != 2 )
      goto LABEL_3;
  }
  if ( v5 == 2 )
    v5 = 1;
LABEL_11:
  *(_BYTE *)(a1 + 1904) &= 0xFCu;
  if ( v5 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v5);
  return (unsigned int)v6;
}
