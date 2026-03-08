/*
 * XREFs of PoFxSystemLatencyNotify @ 0x1402D21B4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // di
  ULONG_PTR i; // rbx
  unsigned __int8 (__fastcall *v5)(__int64, __int64 *); // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
  for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
  {
    v5 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *))(i + 96);
    if ( v5 )
    {
      v7 = a1;
      if ( v5(16LL, &v7) )
      {
        if ( !v3 )
          v3 = *(_DWORD *)(i + 24) >= 0;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  KeLeaveCriticalRegion();
  return v3;
}
