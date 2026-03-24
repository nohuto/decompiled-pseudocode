/*
 * XREFs of CmpDeleteKeyObject @ 0x1406E03B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpWaitForLateUnloadWorker @ 0x140347F08 (CmpWaitForLateUnloadWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     CmpFireCleanupNotifications @ 0x1405D82F4 (CmpFireCleanupNotifications.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpTransDereferenceTransaction @ 0x14066E000 (CmpTransDereferenceTransaction.c)
 *     CmPostCallbackNotification @ 0x1406E05C0 (CmPostCallbackNotification.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     DelistKeyBodyFromKCB @ 0x1406E0720 (DelistKeyBodyFromKCB.c)
 *     CmpCallCallBacks @ 0x1406E081C (CmpCallCallBacks.c)
 *     CmpFlushNotify @ 0x1406E3C7C (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087AB88 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r8d
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  struct _PRIVILEGE_SET *v7; // rcx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v12[2]; // [rsp+60h] [rbp-28h] BYREF

  v10[1] = v10;
  v2 = 0;
  v10[0] = v10;
  memset(v12, 0, sizeof(v12));
  v11 = 0LL;
  CmpInitializeDelayDerefContext(&v11);
  if ( (*(_DWORD *)(a1 + 48) & 4) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(_QWORD *)&v12[0] = a1;
        CmpCallCallBacks(14, (unsigned int)v12, v4, 25, a1, (__int64)v10);
        if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
        {
          CmpFireCleanupNotifications(a1);
          CmpFreeCallbackObjectContexts(a1);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 56) )
      CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
    v9[1] = v9;
    v9[0] = v9;
    CmpLockRegistry();
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          CmpFlushNotify(a1, 0LL, v9);
          CmpUnlockKcb(v5);
        }
        DelistKeyBodyFromKCB(a1, 0LL);
        v6 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(v6 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v6 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4276), 1u) & 0x7F) + 4280) = 16;
        }
        v7 = *(struct _PRIVILEGE_SET **)(a1 + 88);
        if ( v7 )
        {
          CmpKeyEnumStackFreeResumeContext(v7);
          CmpDrainDelayDerefContext((_QWORD **)&v11);
        }
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(v8 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v8 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4276), 1u) & 0x7F) + 4280) = 17;
        }
      }
      CmpDereferenceKeyControlBlock(v5);
    }
    CmpUnlockRegistry();
    CmpSignalDeferredPosts(v9);
    CmPostCallbackNotification(25, 0, 0, (unsigned int)v12, (__int64)v10);
    if ( v2 )
    {
      if ( *(char *)(a1 - 21) < 0 )
        CmpWaitForLateUnloadWorker();
    }
    KeLeaveCriticalRegion();
  }
}
