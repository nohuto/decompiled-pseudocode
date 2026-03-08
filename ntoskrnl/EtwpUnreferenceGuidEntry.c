/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140695094
 * Callers:
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1402FDB04 (EtwGetProviderIdFromHandle.c)
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14068FA30 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140690A30 (EtwpAddGuidEntry.c)
 *     EtwpRegisterKMProvider @ 0x140690D64 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpDeleteRegistrationObject @ 0x140693BC0 (EtwpDeleteRegistrationObject.c)
 *     EtwpGetNextGuidEntry @ 0x140693F10 (EtwpGetNextGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140694950 (EtwpRegisterUMProvider.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140694E30 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140695580 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     EtwpFreeGuidEntry @ 0x14078B2C4 (EtwpFreeGuidEntry.c)
 *     EtwpGetTraceGuidInfo @ 0x140850058 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x1408A29D2 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E46E0 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409E9FE0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14078B2C4 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  volatile signed __int64 *v7; // rbp
  __int64 *v8; // rcx
  __int64 **v9; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = ((unsigned __int8)*((_DWORD *)BugCheckParameter2 + 11) ^ (unsigned __int8)(*((_DWORD *)BugCheckParameter2 + 12) ^ *((_DWORD *)BugCheckParameter2 + 13) ^ *((_DWORD *)BugCheckParameter2 + 10))) & 0x3F;
    v6 = BugCheckParameter2[49] + 512;
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(v6 + 56 * v5);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
    v8 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v9 = (__int64 **)BugCheckParameter2[1], *v9 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    v8[1] = (__int64)v9;
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
