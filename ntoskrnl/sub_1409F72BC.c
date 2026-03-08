/*
 * XREFs of sub_1409F72BC @ 0x1409F72BC
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     SpRegOpenRedirectedKey @ 0x140859F40 (SpRegOpenRedirectedKey.c)
 */

__int64 __fastcall sub_1409F72BC(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+68h] [rbp+10h]
  int v8; // [rsp+70h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  KeyHandle = 0LL;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v8 = SpRegOpenRedirectedKey(v4, v3, &KeyHandle);
    if ( v8 >= 0 )
    {
      v7 = 1;
      v8 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140A75C20,
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
  if ( v7 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
