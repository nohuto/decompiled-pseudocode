/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14026C5E0
 * Callers:
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14026C5B0 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14034FA48 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599544 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140599900 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14026C810 (SmAcquireReleaseCharges.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14034F0C8 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14034F784 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  int v7; // r13d
  volatile signed __int16 *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r15
  signed __int16 v14; // di
  int v15; // edx
  signed __int16 v16; // bx
  bool v17; // zf
  signed __int16 v18; // ax

  v7 = 0;
  v8 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  if ( (a5 & 0x40) == 0
    || (CurrentThread = KeGetCurrentThread(),
        v7 = 1,
        --CurrentThread->SpecialApcDisable,
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL),
        (*(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL) != 0) )
  {
    v11 = *(unsigned int *)(a1 + 6208);
    v12 = *(_QWORD *)v8 & 0x7FFFFFFFFFFF0000LL;
    if ( (a5 & 8) != 0 )
    {
      v10 = 0LL;
      if ( (*v8 & 0x4000) != 0 )
      {
        *v8 &= ~0x4000u;
      }
      else if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v8, 0LL, 1LL) )
      {
        v10 = 3LL;
      }
LABEL_14:
      if ( !v7 )
        return v10;
      goto LABEL_15;
    }
    if ( (a5 & 0x10) != 0 )
    {
      v10 = SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(a1, a2, (_DWORD)v8, *(_DWORD *)v8 & 0xFFFF0000, a5);
      goto LABEL_14;
    }
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v8, 0x8000u);
    }
    else
    {
      v10 = 2LL;
      if ( (a5 & 2) == 0 )
      {
        v14 = *v8;
        if ( (*v8 & 0x1FFF) == 0x1FFF )
        {
LABEL_30:
          v10 = 1LL;
          goto LABEL_14;
        }
        while ( 1 )
        {
          v15 = 0;
          v16 = v14 ^ (v14 ^ (v14 + 1)) & 0x1FFF;
          if ( (v14 & 0x1FFF) == 0 && *(__int64 *)v8 >= 0 )
          {
            v15 = SmAcquireReleaseCharges(v11, 1LL, 0LL);
            if ( !v15 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6488) )
                goto LABEL_14;
              v16 = v16 & 0xC000 | 0x2000;
            }
          }
          v18 = _InterlockedCompareExchange16(v8, v16, v14);
          v17 = v14 == v18;
          v14 = v18;
          if ( v17 )
            break;
          if ( v15 )
            SmAcquireReleaseCharges(v11, 1LL, 1LL);
          if ( (v14 & 0x1FFF) == 0x1FFF )
            goto LABEL_30;
        }
      }
    }
    v10 = v12 + a3;
    goto LABEL_14;
  }
  v10 = 0LL;
LABEL_15:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 6024);
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return v10;
}
