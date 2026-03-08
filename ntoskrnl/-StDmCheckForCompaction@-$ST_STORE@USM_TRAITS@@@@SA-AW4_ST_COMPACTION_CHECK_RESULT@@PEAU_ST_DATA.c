/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x1405C2040
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x1405C0D5C (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C1458 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C1AC4 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x1405C2D68 (-StDmComputeSpaceUsageForPriority@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, char a2)
{
  int v2; // ebp
  unsigned int v5; // ebx
  int v6; // edx
  unsigned int v7; // edi
  _BYTE *v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  __int64 v14; // rax
  BOOL v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 1904) & 3;
  v5 = 2;
  if ( (a2 & 3) == 0 && v2 == 2 )
    return 0LL;
  v6 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
  {
    v9 = *(_DWORD *)(a1 + 856);
    if ( v2 == 3 )
    {
      v10 = v9 - 256;
      v7 = v9 >> 2;
      if ( v7 >= v10 )
        v7 = v10;
    }
    else
    {
      v11 = 3 * (v9 >> 2);
      v7 = v9 - 128;
      if ( v11 < v7 )
        v7 = v11;
    }
    v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableFile;
    if ( v7 < 2 )
      v7 = 2;
  }
  else
  {
    v7 = 3;
    v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem;
  }
  v21 = 0;
  v12 = 0;
  v19 = 0;
  v20 = 0;
  v13 = 8;
  if ( v6 )
    v13 = 1;
  do
    ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
      a1,
      v12++,
      (unsigned int)&v20,
      (unsigned int)&v21,
      (__int64)&v19);
  while ( v12 < v13 );
  v14 = *(_QWORD *)(a1 + 800);
  if ( (a2 & 2) == 0 )
  {
    if ( *(_QWORD *)(v14 + 6568) || v20 < v7 )
      return 0LL;
    v16 = (a2 & 1) == 0
       && (v2 == 1
        || (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL) >> 8)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6592LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL));
    v17 = v21 >> v8[2 * v16];
    if ( v2 == 3 )
      v17 -= v21 >> v8[2 * v16 + 1];
    if ( v19 <= v17 )
    {
      if ( v2 != 1 && v16 )
        return v19 > v21 >> *v8;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 776) )
        return v5;
      v18 = *(_QWORD *)(a1 + 800);
      if ( *(_BYTE *)(v18 + 6022) || !(*(_DWORD *)(v18 + 6100) + *(_DWORD *)(v18 + 6592) + *(_DWORD *)(v18 + 6096)) )
        return v5;
      if ( !v2 || v2 == 3 )
        return 1;
    }
    return 0;
  }
  if ( !*(_BYTE *)(v14 + 6022) && v20 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) > *(_QWORD *)(a1 + 8) )
    return v5;
  return 0LL;
}
