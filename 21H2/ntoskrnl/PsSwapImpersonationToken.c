/*
 * XREFs of PsSwapImpersonationToken @ 0x14071DFB0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x14071D2E0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, struct _DMA_ADAPTER *a2, struct _DMA_ADAPTER *a3)
{
  int v3; // edi
  struct _DMA_ADAPTER *v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DMA_ADAPTER *v15; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject(a3);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1280, 0LL);
    if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1192);
      if ( (struct _DMA_ADAPTER *)(v9 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1296) & 0x100) != 0 )
      {
        v7 = *(struct _DMA_ADAPTER **)(a1 + 1464);
        *(_QWORD *)(a1 + 1464) = 0LL;
        *(_QWORD *)(a1 + 1192) = (unsigned __int64)a3 | v9 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFFFFEFF);
      }
      else
      {
        v3 = -1073741823;
      }
    }
    else
    {
      v3 = -1073741700;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1280), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock(a1 + 1280);
    KeAbPostRelease(a1 + 1280);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, v13);
    if ( v3 < 0 )
    {
      v15 = a3;
    }
    else
    {
      HalPutDmaAdapter(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v15 = v7;
    }
    HalPutDmaAdapter(v15);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}
