/*
 * XREFs of PspStorageReplaceObject @ 0x14090F220
 * Callers:
 *     PsReplaceSiloContext @ 0x140905D00 (PsReplaceSiloContext.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PspGetStorageArray @ 0x1406C4594 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageReplaceObject(__int64 a1, unsigned int a2, struct _DMA_ADAPTER *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  ULONG_PTR v8; // rbx
  struct _DMA_ADAPTER *v9; // rdi
  struct _DMA_ADAPTER *v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0;
  v12 = 0LL;
  result = PspGetStorageArray(a1, a2, &v11, &v12);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ObfReferenceObject(a3);
    v8 = v12 + 16LL * v11;
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = *(struct _DMA_ADAPTER **)(v8 + 8);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      v9 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease(v8);
    if ( (v7 & 0x80000000) != 0 )
    {
      v10 = a3;
    }
    else
    {
      if ( !v9 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v9;
        return v7;
      }
      v10 = v9;
    }
    HalPutDmaAdapter(v10);
    return v7;
  }
  return result;
}
