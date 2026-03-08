/*
 * XREFs of PopPepInsertDevice @ 0x140393A90
 * Callers:
 *     PopPepRegisterDevice @ 0x1408378C4 (PopPepRegisterDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PopPepInsertDevice(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v4; // rax
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
    PopPepLastCheckedDevice = a2;
  v4 = (__int64 **)qword_140C39008;
  if ( *(__int64 **)qword_140C39008 != &PopPepDeviceList )
    __fastfail(3u);
  *a2 = (__int64)&PopPepDeviceList;
  a2[1] = (__int64)v4;
  *v4 = a2;
  qword_140C39008 = (__int64)a2;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
