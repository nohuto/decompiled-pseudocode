/*
 * XREFs of ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x1405BD5E0
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405BDF60 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1405BCFA4 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4,
        int *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rdi
  unsigned int v7; // r15d
  int *v12; // rbp
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // eax
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = (signed __int64 *)(a1 + 440);
  v7 = *a3;
  v19 = *a3;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(a1 + 440, 0LL);
  v12 = a5;
  v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v19, a5);
  if ( v13 != 1024 )
  {
    v14 = *(_DWORD *)(a1 + 1856);
    if ( ((v14 & 4) != 0 || !*v12) && ((v15 = v19, v19 == v7) || (v14 & 8) != 0) )
    {
      *a4 = 0LL;
      *a3 = v15;
    }
    else
    {
      v13 = 1024;
    }
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v16 = KeGetCurrentThread();
  v17 = v16->SpecialApcDisable++ == -1;
  if ( v17 && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  return v13;
}
