/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E538
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14034DD10 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1406FD1F0 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402682C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x14026C810 (SmAcquireReleaseCharges.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E0DC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14034E950 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14034F5FC (SmKmStoreHelperCheckWaitCommand.c)
 *     SmFpCleanup @ 0x14034F6F8 (SmFpCleanup.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14069ABC0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x14092B2C8 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  _DWORD *v3; // r9
  char v4; // al
  _KPROCESS *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  char v17; // cl
  void *v18; // rdi
  void *v19; // rcx
  __int64 result; // rax
  PVOID *v21; // rdi
  int v22; // [rsp+34h] [rbp-64h] BYREF
  _OWORD v23[3]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  memset(v23, 0, sizeof(v23));
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  v4 = *(_BYTE *)(a1 + 6021);
  if ( (v4 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
      v4 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v4 & 4) != 0 )
    {
      v5 = *(_KPROCESS **)(a1 + 6584);
      if ( v5 )
      {
        KiStackAttachProcess(v5, 0LL, (__int64)v23, v3);
        v4 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v4 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v21 = *(PVOID **)(a1 + 6568);
        if ( *v21 )
          SC_ENV::Free(*v21);
        ExFreePoolWithTag(v21, 0);
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
    v22 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      if ( v11 )
        break;
      v13 = (__int64)&v7->LockEntries[v12];
      v10 &= ~(1 << v12);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == SessionId )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
        {
          if ( v13 )
          {
            *(_BYTE *)(v13 + 32) |= 2u;
            if ( *(__int64 *)(v13 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
            v22 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
            *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v13 + 25) &= ~1u;
            *(_QWORD *)(v13 + 32) = 0LL;
            v14 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
            if ( v9 == 1 )
              v7->AbEntrySummary |= 1 << v14;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v14);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 6024, SessionId, 0LL);
LABEL_30:
    --v7->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 6024, &v22);
    v11 = v7->SpecialApcDisable++ == -1;
    if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery(v15);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v16 = *(_BYTE *)(a1 + 6021);
  if ( (v16 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess((__int64)v23, 0);
    v16 = *(_BYTE *)(a1 + 6021);
  }
  v17 = *(_BYTE *)(a1 + 6020);
  if ( v17 )
  {
    if ( v17 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v18 = *(void **)(a1 + 6216);
    if ( (v16 & 4) != 0 )
    {
      v19 = *(void **)(a1 + 6224);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
