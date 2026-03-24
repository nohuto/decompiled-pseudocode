/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14034DBD8
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14034DAEC (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059BB50 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     MmStoreDecommitVirtualMemory @ 0x14032B734 (MmStoreDecommitVirtualMemory.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14034F1F0 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14034F750 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14034F784 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // r12
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // r14d
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // r15
  __int64 result; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h]

  v4 = *(unsigned int *)(a1 + 6208);
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v8 = *v7 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v8 )
    return 1075380276LL;
  v9 = 1;
  if ( (*(_WORD *)v7 & 0x4000) != 0 )
    *(_WORD *)v7 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v7, a3 & 1, a4);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  if ( (__int64)*v7 >= 0 )
  {
    v9 = 0;
    MmStoreDecommitVirtualMemory(v8, v4, v10, v11);
  }
  if ( *(__int16 *)v7 < 0 )
    return 3221225646LL;
  v12 = *v7;
  *v7 = 0LL;
  v14[0] = v8;
  v15 = 0LL;
  v14[1] = v4;
  LODWORD(v15) = v9 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE;
  v16 = 0LL;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 3LL, v14);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v7 = v12;
  return result;
}
