__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  _QWORD *v12; // rcx
  volatile signed __int64 *v13; // rdi
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  DeviceData = -1073741275;
  memset(v15, 0, 0x44uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v15[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C649F8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C649F8, (__int64)v15);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData((__int64)v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140C649F8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C649F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegion();
  return DeviceData;
}
