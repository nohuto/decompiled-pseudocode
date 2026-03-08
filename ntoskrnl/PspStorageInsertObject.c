/*
 * XREFs of PspStorageInsertObject @ 0x140738660
 * Callers:
 *     PsInsertSiloContext @ 0x140738510 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x14073858C (PsInsertPermanentSiloContextEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspGetStorageArray @ 0x140738754 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  volatile signed __int64 *v14; // rbx
  char v15; // si
  unsigned int v16; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+28h] [rbp-20h] BYREF

  v16 = 0;
  v17[0] = 0LL;
  result = PspGetStorageArray(a1, a2, &v16, v17);
  v7 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = v17[0] + 16LL * v16;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = *(_QWORD *)(v9 + 8);
    v11 = v16;
    v12 = v17[0];
    if ( v10 )
    {
      v7 = -1073741637;
    }
    else
    {
      ObfReferenceObject((PVOID)a4);
      v13 = a4 | 1;
      if ( !a3 )
        v13 = a4;
      *(_QWORD *)(v12 + 16LL * (unsigned int)v11 + 8) = v13;
    }
    v14 = (volatile signed __int64 *)(v12 + 16 * v11);
    v15 = _InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v7;
  }
  return result;
}
