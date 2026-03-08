/*
 * XREFs of ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1405BE970
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405BEBE8 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1405BE190 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x1405BE7AC (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1405BE808 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 VirtualLockedRegion; // rax
  __int64 v12; // r8
  _QWORD *v13; // r12
  int v14; // edx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  _OWORD v19[3]; // [rsp+20h] [rbp-30h] BYREF

  v7 = a2;
  if ( *a3 < 0 )
  {
    v9 = a4;
LABEL_16:
    v17 = *(_QWORD *)(a1 + 6568);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      *(_BYTE *)(*(_QWORD *)(v17 + 16) + (v7 >> 3)) &= ~(1 << (v7 & 7));
    if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 && *a3 >= 0 )
    {
      *((_QWORD *)&v19[0] + 1) = *(unsigned int *)(a1 + 6208);
      *(_QWORD *)&v19[0] = a4;
      memset(&v19[1], 0, 32);
      SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 6, v19, 8u);
    }
    return v9;
  }
  v10 = *(_QWORD *)(a1 + 6576);
  if ( v10 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v10, 0) )
    return 0LL;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 7) & 7, 0LL);
  *(_QWORD *)((char *)&v19[2] + 4) &= v12;
  HIDWORD(v19[2]) &= v12;
  v13 = (_QWORD *)VirtualLockedRegion;
  *((_QWORD *)&v19[0] + 1) = *(unsigned int *)(a1 + 6208);
  *(_QWORD *)(a1 + 6576) = a3;
  *(_QWORD *)&v19[0] = a4;
  LODWORD(v19[1]) = v14;
  *(_OWORD *)((char *)&v19[1] + 4) = 0LL;
  if ( (a5 & 1) != 0 )
    DWORD1(v19[1]) |= 1u;
  v15 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 4, v19, (a5 & 0x20 | 0x10) >> 2);
  if ( v15 < 0 )
  {
    if ( v15 == -1073741536 )
      return 3LL;
    *(_QWORD *)(a1 + 6576) = 0LL;
    return 0LL;
  }
  *(_QWORD *)(a1 + 6576) = 0LL;
  if ( (SDWORD2(v19[2]) & 0x80000000) == 0 )
  {
    v16 = *((_QWORD *)&v19[1] + 1);
    *v13 = *((_QWORD *)&v19[1] + 1);
    v9 = *(_QWORD *)(v16 + 24);
    goto LABEL_16;
  }
  v9 = 0LL;
  if ( DWORD2(v19[2]) == -1073740749 )
  {
    v9 = 1LL;
    *(_WORD *)a3 |= 0x4000u;
  }
  return v9;
}
