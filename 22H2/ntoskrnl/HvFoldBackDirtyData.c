/*
 * XREFs of HvFoldBackDirtyData @ 0x1408769B4
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 *     HvFreeDirtyData @ 0x14071BBEC (HvFreeDirtyData.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR a1)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // r14
  volatile signed __int64 *v4; // rdi
  int v5; // ebp

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1688) )
  {
    v3 = *(unsigned int *)(a1 + 1680);
    v4 = (volatile signed __int64 *)(a1 + 80);
    ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
    if ( (_DWORD)v3 )
    {
      v5 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 1688), v1) == 1 )
          HvpMarkDirty(a1, v5, 1u, 0);
        ++v1;
        v5 += 512;
        --v3;
      }
      while ( v3 );
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  HvFreeDirtyData(a1);
}
