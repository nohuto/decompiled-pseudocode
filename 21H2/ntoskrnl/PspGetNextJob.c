/*
 * XREFs of PspGetNextJob @ 0x1406818A0
 * Callers:
 *     PspGetNextSilo @ 0x140681750 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x14068179C (PspEnforceLimits.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // rsi
  __int64 *v4; // r14
  bool v5; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  if ( Object )
    v4 = (__int64 *)Object[3];
  else
    v4 = (__int64 *)PspJobList;
  if ( v4 != &PspJobList )
  {
    while ( !ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v4 = (__int64 *)*v4;
      if ( v4 == &PspJobList )
        goto LABEL_6;
    }
    v3 = v4 - 3;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
