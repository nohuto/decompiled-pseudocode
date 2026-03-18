/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140696EC8
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140205CA8 (SepSetTokenBnoIsolation.c)
 *     SepTokenDeleteMethod @ 0x1406FE720 (SepTokenDeleteMethod.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x14021FA9C (SepCloseCachedTokenHandles.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // rax
  char v7; // di
  BOOLEAN v9; // r14
  char v10; // di
  void *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
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
      ExfTryToWakePushLock(v3);
    KeAbPostRelease(v3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    return v4;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease(v3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
