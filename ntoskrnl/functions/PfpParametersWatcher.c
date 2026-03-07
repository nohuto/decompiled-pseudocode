void __fastcall PfpParametersWatcher(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  char v7; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 504);
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 504, 0LL);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = ZwNotifyChangeKey(
           v4,
           0LL,
           (PIO_APC_ROUTINE)(a1 + 32),
           (PVOID)1,
           (PIO_STATUS_BLOCK)(a1 + 16),
           0x1000000Fu,
           0,
           (PVOID)(a1 + 64),
           4u,
           1u);
    if ( v5 >= 0 )
      goto LABEL_8;
    if ( v5 == -1073741444 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        v6 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = KeyHandle;
        if ( v6 )
          ZwClose(v6);
        if ( ZwNotifyChangeKey(
               *(HANDLE *)(a1 + 8),
               0LL,
               (PIO_APC_ROUTINE)(a1 + 32),
               (PVOID)1,
               (PIO_STATUS_BLOCK)(a1 + 16),
               0x1000000Fu,
               0,
               (PVOID)(a1 + 64),
               4u,
               1u) >= 0 )
        {
LABEL_8:
          v7 = 0;
          if ( (int)PfpParametersRead(a1) >= 0 )
          {
            PfpParametersPropagate((_DWORD *)a1);
            v7 = 1;
          }
          if ( (int)PfSnParametersRead(a1) < 0 )
          {
            if ( !v7 )
              goto LABEL_15;
          }
          else
          {
            PfSnDetermineEnablePrefetcher();
          }
          if ( *(_QWORD *)a1 )
            KeSetEvent(*(PRKEVENT *)a1, 0, 0);
        }
      }
    }
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
}
