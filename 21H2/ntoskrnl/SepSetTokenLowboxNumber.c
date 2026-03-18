/*
 * XREFs of SepSetTokenLowboxNumber @ 0x1406965F4
 * Callers:
 *     SepGetAnonymousToken @ 0x14021F764 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x1407530D0 (SeSetSessionIdToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x1405F5A58 (SepGetTokenSessionMapEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x140695078 (SepInitializeLowBoxNumberTable.c)
 *     SepGetLowBoxNumberEntry @ 0x140696750 (SepGetLowBoxNumberEntry.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char v5; // r15
  char v6; // r12
  int LowBoxNumberEntry; // edi
  char *v8; // rsi
  struct _KTHREAD *v9; // rax
  volatile signed __int64 *v10; // rsi
  struct _KTHREAD *v12; // rax
  volatile signed __int64 *v13; // r14
  struct _KTHREAD *CurrentThread; // rax
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v16; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+48h] BYREF
  __int64 v18; // [rsp+78h] [rbp+50h]
  __int64 v19; // [rsp+80h] [rbp+58h] BYREF

  v18 = a2;
  v2 = *(unsigned int *)(a1 + 120);
  v3 = a2;
  BugCheckParameter2 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v6 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v2 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v5 = 1;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(v2, 0, (__int64 *)&BugCheckParameter2);
    LowBoxNumberEntry = TokenSessionMapEntry;
    if ( TokenSessionMapEntry < 0 )
    {
      if ( TokenSessionMapEntry != -1073741275 )
        goto LABEL_26;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
      KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
      KeLeaveCriticalRegion();
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
      LowBoxNumberEntry = SepGetTokenSessionMapEntry(v2, 1, (__int64 *)&BugCheckParameter2);
      v5 = 0;
      v6 = 1;
      if ( LowBoxNumberEntry < 0 )
        goto LABEL_10;
    }
    v8 = (char *)BugCheckParameter2;
  }
  else
  {
    v8 = (char *)&g_SessionLowboxArray + 40 * v2;
    BugCheckParameter2 = (ULONG_PTR)v8;
  }
  if ( !v8[32] )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = (volatile signed __int64 *)BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( !v8[32] )
      LowBoxNumberEntry = SepInitializeLowBoxNumberTable((__int64)v13);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v3 = v18;
  }
  if ( !LowBoxNumberEntry )
  {
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = (volatile signed __int64 *)BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    LowBoxNumberEntry = SepGetLowBoxNumberEntry(v10, v3, &v19);
    if ( !LowBoxNumberEntry )
      *(_QWORD *)(a1 + 1080) = v19;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
LABEL_10:
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&LowboxSessionMapLock);
    goto LABEL_28;
  }
  if ( v5 )
  {
LABEL_26:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
LABEL_28:
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
