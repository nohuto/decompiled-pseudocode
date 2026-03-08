/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020031C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405BEE44 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405BEF00 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x1405CB29C (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  int v5; // ebx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  unsigned int v13; // eax
  _OWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 6584);
  memset(v14, 0, sizeof(v14));
  KiStackAttachProcess(v4);
  if ( !a2 )
  {
    v13 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
    goto LABEL_21;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v13 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
LABEL_21:
    v7 = v13;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    v6 = *(_QWORD **)(a1 + 6568);
    if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v6 == (_QWORD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 6568),
                             -1LL,
                             (signed __int64)v6) )
      {
        if ( *v6 )
          v7 = SmPerformStoreSwapOperation(2LL);
        else
          v7 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
        CurrentThread = KeGetCurrentThread();
        v10 = (volatile signed __int64 *)(a1 + 6024);
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
        if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v10);
        KeAbPostRelease((ULONG_PTR)v10);
        v11 = KeGetCurrentThread();
        v12 = v11->SpecialApcDisable++ == -1;
        if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
          KiCheckForKernelApcDelivery();
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v7 = -1073740682;
      }
    }
    else
    {
      v7 = -1073741661;
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_6:
  KiUnstackDetachProcess(v14, 0LL);
  return v7;
}
