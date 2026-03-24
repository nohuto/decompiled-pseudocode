/*
 * XREFs of sub_14094DC8C @ 0x14094DC8C
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA740 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FAFA0 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_14094DC8C(__int64 a1)
{
  signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]
  char v5; // [rsp+78h] [rbp+10h]
  NTSTATUS v6; // [rsp+80h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  KeyHandle = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v6 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1409847F0, 0, 0LL, 0, 0LL);
    if ( v6 >= 0 )
    {
      v5 = 1;
      v6 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140984128,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
