/*
 * XREFs of PopPepIterateDeviceList @ 0x1405755F0
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x14057EC64 (PopPlRegisterPowerPlane.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

bool __fastcall PopPepIterateDeviceList(
        void (__fastcall *a1)(__int64),
        unsigned __int8 (__fastcall *a2)(__int64 *, __int64),
        void (__fastcall *a3)(void (__fastcall *)(__int64), __int64),
        __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  void (__fastcall *v9)(__int64); // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rbx
  bool v12; // di
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v9 = a1;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  }
  if ( v9 )
    v9(a7);
  v11 = (__int64 *)PopPepDeviceList;
  v12 = 1;
  if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
  {
    do
    {
      if ( !a2(v11, a7) )
        break;
      v11 = (__int64 *)*v11;
    }
    while ( v11 != &PopPepDeviceList );
    v12 = v11 == &PopPepDeviceList;
  }
  if ( a3 )
  {
    LOBYTE(a1) = v12;
    a3(a1, a7);
  }
  if ( a6 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  }
  return v12;
}
