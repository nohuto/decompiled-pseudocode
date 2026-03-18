/*
 * XREFs of PspStorageGetObject @ 0x1407D9870
 * Callers:
 *     PsGetSiloContext @ 0x140362B90 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x1409AC640 (PsFreeSiloContextSlot.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     PspGetStorageArrayIfPossible @ 0x1402F8654 (PspGetStorageArrayIfPossible.c)
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
