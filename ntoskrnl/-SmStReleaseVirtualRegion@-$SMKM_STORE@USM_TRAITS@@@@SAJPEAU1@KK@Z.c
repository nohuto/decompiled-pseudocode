/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1405BF764
 * Callers:
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405C3EC0 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C6F6C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1405BE190 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1405BE808 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1405BE93C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065A994 (MmStoreDecommitVirtualMemory.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // esi
  int v10; // edi
  __int64 v11; // r15
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]

  v3 = *(unsigned int *)(a1 + 6208);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v7 = *v6 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v7 )
    return 1075380276LL;
  v9 = 1;
  if ( (*(_WORD *)v6 & 0x4000) != 0 )
  {
    *(_WORD *)v6 &= ~0x4000u;
    v10 = a3 & 1;
  }
  else
  {
    v10 = a3 & 1;
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, *(_QWORD *)(a1 + 6216) + 8LL * a2, v10);
  }
  if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  if ( (__int64)*v6 >= 0 )
  {
    v9 = 0;
    MmStoreDecommitVirtualMemory(v7, v3);
  }
  if ( *(__int16 *)v6 < 0 )
    return 3221225646LL;
  v11 = *v6;
  *v6 = 0LL;
  *(_QWORD *)&v12 = v7;
  v13 = 0LL;
  *((_QWORD *)&v12 + 1) = v3;
  LODWORD(v13) = v9 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE;
  v14 = 0LL;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3, &v12, v10 != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v6 = v11;
  return result;
}
