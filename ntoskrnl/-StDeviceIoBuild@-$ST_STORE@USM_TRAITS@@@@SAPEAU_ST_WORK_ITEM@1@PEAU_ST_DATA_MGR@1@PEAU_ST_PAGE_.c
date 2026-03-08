/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1405C1BF4
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405C3430 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x1405C5290 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C6EEC (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadReference@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C6F20 (-StRegionReadReference@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmCalcIoWorkItemSize @ 0x1405CB034 (SmCalcIoWorkItemSize.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r11d
  int v8; // r8d
  _DWORD *v9; // rbx
  unsigned int v10; // r15d
  int v11; // r10d
  unsigned int v12; // ebp
  __int64 Pool2; // rsi
  unsigned int v14; // eax
  size_t v15; // r14
  int v16; // ecx

  v6 = *(_DWORD *)(a1 + 824) + *(unsigned __int16 *)(a2 + 4);
  v8 = *(_DWORD *)(a1 + 792);
  v9 = 0LL;
  v10 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v11 = (v8 - 1) & (16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)));
  v12 = v8 + v11 - ((v8 - 1) & (v11 + v8 + v6 - 1)) + v6 - 1;
  if ( (unsigned int)ST_STORE<SM_TRAITS>::StRegionReadReference(a1, v10) )
  {
    Pool2 = *(_QWORD *)(a1 + 1800);
    if ( Pool2 )
    {
      *(_DWORD *)(a1 + 1800) |= 1u;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, v12 + *(_DWORD *)(a1 + 792) + 28, 1951624563LL);
      if ( !Pool2 )
        goto LABEL_14;
    }
    *(_QWORD *)(Pool2 + 4) = 0LL;
    *(_QWORD *)(Pool2 + 12) = 0LL;
    *(_QWORD *)(Pool2 + 20) = 0LL;
    *(_DWORD *)Pool2 = 1;
    *(_OWORD *)(Pool2 + 12) = *(_OWORD *)a2;
    v14 = SmCalcIoWorkItemSize(
            *(_QWORD *)(a1 + 800),
            -(__int64)*(unsigned int *)(a1 + 792) & (Pool2 + *(unsigned int *)(a1 + 792) + 27LL),
            v12);
    v9 = *(_DWORD **)(a1 + 1808);
    v15 = v14;
    if ( v9 )
    {
      *(_DWORD *)(a1 + 1808) |= 1u;
LABEL_8:
      memset(v9, 0, v15);
      *v9 |= 7u;
      *((_QWORD *)v9 + 1) = a4;
      *((_QWORD *)v9 + 2) = Pool2;
      v9[6] = *(_DWORD *)a2;
      v9[7] = v9[7] & 0x1D | (32 * v12) | *(_DWORD *)(a1 + 832) & 2;
      return v9;
    }
    v9 = (_DWORD *)ExAllocatePool2(64LL, v14, 1951624563LL);
    if ( v9 )
      goto LABEL_8;
    v9 = 0LL;
    v16 = *(_DWORD *)(a1 + 1800);
    if ( (v16 & 1) != 0 && (Pool2 | 1) == *(_QWORD *)(a1 + 1800) )
      *(_DWORD *)(a1 + 1800) = v16 & 0xFFFFFFFE;
    else
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_14:
    ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v10);
  }
  return v9;
}
