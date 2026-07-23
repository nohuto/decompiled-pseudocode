/*
 * XREFs of sub_14094DE5C @ 0x14094DE5C
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_14094DE5C(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]
  char v8; // [rsp+78h] [rbp+10h]
  NTSTATUS v9; // [rsp+80h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  KeyHandle = 0LL;
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v9 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_140984A30, 0, 0LL, 0, 0LL);
    if ( v9 >= 0 )
    {
      v8 = 1;
      v9 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140984308,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  if ( v8 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
