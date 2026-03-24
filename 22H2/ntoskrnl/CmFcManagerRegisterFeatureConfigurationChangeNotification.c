/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DB8C
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14086B1B0 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     MiGetPfnLink @ 0x14032C1B0 (MiGetPfnLink.c)
 *     CmFcpWorkItemQueueWork @ 0x1404ED90C (CmFcpWorkItemQueueWork.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087E530 (CmFcpManagerAllocateChangeSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureConfigurationChangeNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rax

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C483B0, 0LL);
    v9 = (__int64 *)qword_140C483C0;
    if ( *(__int64 **)qword_140C483C0 != &qword_140C483B8 )
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140C483B8;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_140C483C0 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C483B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C483B0);
    KeAbPostRelease((ULONG_PTR)&stru_140C483B0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a4 && MiGetPfnLink((__int64)&qword_140C48198) != *a4 )
      CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
