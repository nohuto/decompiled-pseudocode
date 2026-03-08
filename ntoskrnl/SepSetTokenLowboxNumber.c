/*
 * XREFs of SepSetTokenLowboxNumber @ 0x1407398DC
 * Callers:
 *     SepGetAnonymousToken @ 0x1402B7BE0 (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140743440 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x14083FA34 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SepGetTokenSessionMapEntry @ 0x14045C46E (SepGetTokenSessionMapEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140739A38 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x140739CF0 (SepInitializeLowBoxNumberTable.c)
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
  ULONG_PTR v11; // rcx
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // r14
  ULONG_PTR v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v18; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+58h] BYREF
  __int64 v21; // [rsp+88h] [rbp+60h] BYREF

  v2 = *(unsigned int *)(a1 + 120);
  v3 = a2;
  BugCheckParameter2 = 0LL;
  v21 = 0LL;
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
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
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
    v13 = KeGetCurrentThread();
    v14 = (volatile signed __int64 *)BugCheckParameter2;
    v15 = BugCheckParameter2;
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    if ( !v8[32] )
      LowBoxNumberEntry = SepInitializeLowBoxNumberTable(v14);
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v3 = a2;
  }
  if ( !LowBoxNumberEntry )
  {
    v9 = KeGetCurrentThread();
    v10 = (volatile signed __int64 *)BugCheckParameter2;
    v11 = BugCheckParameter2;
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    LowBoxNumberEntry = SepGetLowBoxNumberEntry(v10, v3, &v21);
    if ( !LowBoxNumberEntry )
      *(_QWORD *)(a1 + 1080) = v21;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
LABEL_10:
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
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
