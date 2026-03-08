/*
 * XREFs of PspStorageGetObject @ 0x14078AF38
 * Callers:
 *     PsGetSiloContext @ 0x1402F7C30 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x1409A95C0 (PsFreeSiloContextSlot.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PspGetStorageArrayIfPossible @ 0x1402995E4 (PspGetStorageArrayIfPossible.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PspStorageGetObject(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v8[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v9, v8);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (signed __int64 *)(v8[0] + 16LL * v9);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v6, 0LL);
    v7 = v6[1] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 )
      ObfReferenceObject((PVOID)(v6[1] & 0xFFFFFFFFFFFFFFFEuLL));
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v7 )
    {
      *a3 = v7;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
