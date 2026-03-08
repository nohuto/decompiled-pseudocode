/*
 * XREFs of ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C1E04
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405C3430 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x1405C5290 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     StEtaIoStart @ 0x1405C8538 (StEtaIoStart.c)
 *     SmIssueIo @ 0x1405CB0C8 (SmIssueIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDeviceIoIssue(__int64 a1, __int64 *a2)
{
  int v4; // r8d
  __int64 *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  unsigned int *v8; // r15
  int v9; // ebp
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax

  v4 = -2147483634;
  while ( 1 )
  {
    v5 = (__int64 *)a2[1];
    if ( v5 == a2 )
      break;
    v6 = *a2;
    *a2 = *(_QWORD *)*a2 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (__int64 *)v6 == v5 )
    {
      *a2 = 0LL;
      a2[1] = (__int64)a2;
    }
    else
    {
      *v5 = *v5 & 7 | (8 * ((unsigned __int64)*v5 >> 3) - 8);
    }
    v7 = *(_DWORD *)(v6 + 24);
    v8 = *(unsigned int **)(v6 + 16);
    v9 = -*(_DWORD *)(a1 + 792) & (16 * (v7 & *(_DWORD *)(a1 + 808)));
    v10 = v7 >> *(_DWORD *)(a1 + 812);
    v11 = *(_DWORD *)(v6 + 28);
    v12 = v11 >> 5;
    if ( *(_QWORD *)(a1 + 1816) && (v11 & 4) == 0 )
      *(LARGE_INTEGER *)(v8 + 1) = KeQueryPerformanceCounter(0LL);
    StEtaIoStart(*(_QWORD *)(a1 + 1000), v12, 0LL, (v6 + 8) | (*(_DWORD *)(v6 + 28) >> 3) & 1);
    *(_DWORD *)(v6 + 28) |= 8u;
    v4 = SmIssueIo(
           *(_QWORD *)(a1 + 800),
           v10,
           v9,
           v12,
           -(__int64)*(unsigned int *)(a1 + 792) & ((unsigned __int64)&v8[4 * *v8 + 2] + *(unsigned int *)(a1 + 792) + 3),
           v6 | 1);
    if ( v4 < 0 )
    {
      *(_DWORD *)(v6 + 28) |= 1u;
      v13 = *(_QWORD *)(v6 + 16);
      if ( v13 )
        *(_DWORD *)(v13 + 4) = v4;
      else
        *(_DWORD *)(v6 + 8) = v4;
      *(_QWORD *)v6 = *(_DWORD *)v6 & 7 | ((*(_QWORD *)a2[1] & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      *(_QWORD *)a2[1] = v6 | *(_DWORD *)a2[1] & 7;
      a2[1] = v6;
      return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}
