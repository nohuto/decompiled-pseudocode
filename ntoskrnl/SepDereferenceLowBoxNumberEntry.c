/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x14074438C
 * Callers:
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x140743440 (SeSetSessionIdToken.c)
 *     SepTokenDeleteMethod @ 0x1407C3CB0 (SepTokenDeleteMethod.c)
 *     SeExchangePrimaryToken @ 0x14083FA34 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlRemoveEntryHashTable @ 0x1402B8170 (RtlRemoveEntryHashTable.c)
 *     RtlDereferenceAtomTable @ 0x140302E7C (RtlDereferenceAtomTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x140302E94 (ExRemoveLowBoxAtomReferences.c)
 *     SepGetTokenSessionMapEntry @ 0x14045C46E (SepGetTokenSessionMapEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2)
{
  unsigned int TokenSessionMapEntry; // ebp
  struct _KTHREAD *v5; // rax
  ULONG_PTR v6; // rcx
  __int64 v7; // rax
  ULONG_PTR v9; // rsi
  BOOLEAN v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(a1, 0, (__int64 *)&BugCheckParameter2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v5 = KeGetCurrentThread();
  v6 = BugCheckParameter2;
  --v5->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  v7 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v7 <= 0 )
  {
    if ( v7 )
      __fastfail(0xEu);
    v9 = BugCheckParameter2;
    v10 = RtlRemoveEntryHashTable(
            *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
            (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
            0LL);
    if ( v10 )
      *(_BYTE *)(*(_QWORD *)(v9 + 16) + ((unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 40) - 1) >> 3)) &= ~(1 << ((*(_BYTE *)(a2 + 40) - 1) & 7));
    else
      TokenSessionMapEntry = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( v10 && *(_QWORD *)(a2 + 48) )
    {
      ExRemoveLowBoxAtomReferences();
      RtlDereferenceAtomTable();
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    return TokenSessionMapEntry;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
