/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1402E6790 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     SmKmStoreHelperCleanup @ 0x1402E6C34 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402E6CEC (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6D0C (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6DD8 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     SmFpCleanup @ 0x1403590B8 (SmFpCleanup.c)
 *     SmAcquireReleaseCharges @ 0x140359F14 (SmAcquireReleaseCharges.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  bool v2; // zf
  void *v3; // rcx
  ULONG_PTR v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rax
  char v7; // al
  char v8; // cl
  void *v9; // rbx
  void *v10; // rcx
  __int64 result; // rax
  void **v12; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+30h] [rbp-58h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(_QWORD *)(a1 + 6200) == 0LL;
  memset(&v13, 0, sizeof(v13));
  if ( !v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
  }
  v3 = *(void **)(a1 + 6200);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 6584);
      if ( v4 )
        KiStackAttachProcess(v4);
      if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v12 = *(void ***)(a1 + 6568);
        if ( *v12 )
          SC_ENV::Free(*v12);
        ExFreePoolWithTag(v12, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    v6 = KeGetCurrentThread();
    v2 = v6->SpecialApcDisable++ == -1;
    if ( v2 && ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery();
  }
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v7 = *(_BYTE *)(a1 + 6021);
  if ( (v7 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess(&v13);
    v7 = *(_BYTE *)(a1 + 6021);
  }
  v8 = *(_BYTE *)(a1 + 6020);
  if ( v8 )
  {
    if ( v8 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v9 = *(void **)(a1 + 6216);
    if ( (v7 & 4) != 0 )
    {
      v10 = *(void **)(a1 + 6224);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), *(unsigned int *)(a1 + 6208), 1LL, 1LL);
  return result;
}
