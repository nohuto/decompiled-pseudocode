/*
 * XREFs of HalpIommuDeleteDevice @ 0x140864CA0
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036CB10 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuBlockDevice @ 0x1404C8DA0 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C9DC0 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA320 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA530 (IommuDomainDetachDevice.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3E68 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IommupHvUnregisterDeviceId @ 0x1404DA2FC (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x1405C62CC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(_QWORD *a1)
{
  unsigned int v2; // ebp
  char v3; // si
  __int64 v4; // rdi
  __int64 i; // r11
  __int64 v6; // r11
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock, 0LL);
  for ( i = HalpIommuDeviceCreatedList; (__int64 *)i != &HalpIommuDeviceCreatedList; i = *(_QWORD *)v6 )
  {
    v4 = i;
    if ( IidAreIdsStrictlyEqual(*(int **)(i + 16), a1[4]) && (*(_DWORD *)(v6 + 32))-- == 1 )
    {
      v8 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v9 = *(__int64 **)(v6 + 8), *v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      v3 = 1;
      *(_QWORD *)(v8 + 8) = v9;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  if ( !v3 )
    return 0LL;
  if ( v4 )
  {
    v12 = *(_QWORD *)(v4 + 16);
    if ( v12 )
      HalpMmAllocCtxFree(v10, v12);
    HalpMmAllocCtxFree(v10, v4);
  }
  if ( HalpHvIommu )
    v2 = IommupHvUnregisterDeviceId();
  else
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1[1] + 96LL))(*(_QWORD *)(a1[1] + 16LL), *a1, 0LL);
  v14 = a1[4];
  if ( v14 )
    HalpMmAllocCtxFree(v13, v14);
  HalpMmAllocCtxFree(v13, (__int64)a1);
  return v2;
}
