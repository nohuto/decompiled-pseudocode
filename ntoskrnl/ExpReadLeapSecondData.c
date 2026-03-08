/*
 * XREFs of ExpReadLeapSecondData @ 0x140850DB4
 * Callers:
 *     ExInitializeLeapSecondData @ 0x140850BB0 (ExInitializeLeapSecondData.c)
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x1409F4E70 (ExpLeapSecondDataRegistryNotifyHandler.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x140414730 (ZwNotifyChangeKey.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140851054 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1408510E0 (ExpParseAndUpdateLeapSecondData.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140851178 (EtwTraceLeapSecondDataUpdate.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1409E2D08 (EtwTraceLeapSecondDataParseFailure.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *Pool2; // rbx
  void *v6; // r14
  HANDLE v7; // rdi
  bool v8; // r15
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  unsigned int updated; // eax
  char v12; // si
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  ResultLength = 0;
  CurrentThread = KeGetCurrentThread();
  KeyHandle = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpLeapSecondDataLock, 0LL);
  if ( ExpLeapSecondDataRegistryNotify )
  {
    v7 = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
    Pool2 = (char *)ExpLeapSecondDataRegistryNotify;
    KeyHandle = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
  }
  else
  {
    if ( (int)ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0 )
      goto LABEL_21;
    Pool2 = (char *)ExAllocatePool2(64LL, 56LL, 1683189836LL);
    if ( !Pool2 )
      goto LABEL_21;
    v7 = KeyHandle;
  }
  *((_QWORD *)Pool2 + 3) = ExpLeapSecondDataRegistryNotifyHandler;
  *((_QWORD *)Pool2 + 4) = 0LL;
  *((_QWORD *)Pool2 + 1) = 0LL;
  if ( ZwNotifyChangeKey(
         v7,
         0LL,
         (PIO_APC_ROUTINE)(Pool2 + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(Pool2 + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_21;
  v8 = 1;
  if ( ZwQueryValueKey(
         v7,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v16 == 4
    && v17 == 4 )
  {
    v8 = v18 != 0;
  }
  *a1 = v8;
  v9 = *((_DWORD *)a1 + 1);
  v10 = ZwQueryValueKey(
          v7,
          (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
          KeyValuePartialInformation,
          0LL,
          0,
          &ResultLength);
  if ( v10 != -1073741789 )
    goto LABEL_13;
  v6 = (void *)ExAllocatePool2(256LL, ResultLength, 1683189836LL);
  if ( v6 )
  {
    v10 = ZwQueryValueKey(
            v7,
            (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
            KeyValuePartialInformation,
            v6,
            ResultLength,
            &ResultLength);
LABEL_13:
    if ( v10 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData(v6, a1);
      ExLeapSecondDataLastParseResult = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
  }
  if ( a2 )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
  }
  EtwTraceLeapSecondDataUpdate(1LL, *a1, *((unsigned int *)a1 + 1), v9);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)Pool2;
    *(_QWORD *)Pool2 = v7;
  }
  Pool2 = 0LL;
  KeyHandle = 0LL;
LABEL_21:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6453704Cu);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x6453704Cu);
    ExpLeapSecondDataRegistryNotify = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
