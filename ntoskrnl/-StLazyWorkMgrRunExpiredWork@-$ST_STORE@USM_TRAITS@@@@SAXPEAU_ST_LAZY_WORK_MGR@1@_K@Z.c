/*
 * XREFs of ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C6438
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1405C63DC (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C6530 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // r11
  int v4; // r9d
  _QWORD *v7; // r8
  char v8; // cl
  char v9; // r10
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = a1 + 168;
  v4 = 0;
  v7 = (_QWORD *)a1;
  if ( a1 < a1 + 168 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = v7[1];
      if ( v10 != -1LL )
      {
        if ( *v7 <= *(_QWORD *)(a1 + 184) || (v8 = v9, v10 <= a2) )
        {
          *v7 = -1LL;
          v2 |= 1 << v8;
          v7[1] = -1LL;
        }
      }
      v7 += 3;
      v8 = ++v4;
      v9 = v4;
    }
    while ( (unsigned __int64)v7 < v3 );
  }
  v13 = 0LL;
  LODWORD(v13) = 6;
  *(_DWORD *)(a1 + 224) |= 1u;
  v14 = 0LL;
  DWORD2(v13) = 1;
  while ( v2 )
  {
    _BitScanForward(&v11, v2);
    LODWORD(v14) = v11;
    v2 &= ~(1 << v11);
    ST_STORE<SM_TRAITS>::StWorkItemProcess(a1 - 5744, (char *)&v13 + 1);
  }
  *(_DWORD *)(a1 + 224) &= ~1u;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(a1, 0LL);
}
