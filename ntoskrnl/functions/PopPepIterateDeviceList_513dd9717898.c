char __fastcall PopPepIterateDeviceList(
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
  __int64 *v11; // rdi
  char v12; // bl

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
  while ( v11 != &PopPepDeviceList )
  {
    if ( !a2(v11, a7) )
    {
      v12 = 0;
      break;
    }
    v11 = (__int64 *)*v11;
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
    KeLeaveCriticalRegion();
  }
  return v12;
}
