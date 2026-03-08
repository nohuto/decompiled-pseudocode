/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140744278
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140296F14 (SepSetTokenBnoIsolation.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1407C3CB0 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x1402B8170 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x140300274 (SepCloseCachedTokenHandles.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  char v7; // di
  BOOLEAN v9; // r14
  char v10; // di
  void *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v9 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v11 = *(void **)(a2 + 64);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v5;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
