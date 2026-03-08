/*
 * XREFs of PopFxInsertDevice @ 0x140393B3C
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x140836AB0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140836FBC (PopFxRegisterDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  char v6; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140C3E7B8;
  if ( *(ULONG_PTR **)qword_140C3E7B8 != &PopFxDeviceList )
    __fastfail(3u);
  *a3 = &PopFxDeviceList;
  a3[1] = v5;
  *v5 = a3;
  qword_140C3E7B8 = (__int64)a3;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
