/*
 * XREFs of HvFoldBackDirtyData @ 0x140A1DD50
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HvMarkDirtyForFlush @ 0x1402FF80C (HvMarkDirtyForFlush.c)
 *     HvFreeDirtyData @ 0x14074C830 (HvFreeDirtyData.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // r14
  unsigned __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // ebp

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1696) )
  {
    v3 = *(unsigned int *)(a1 + 1688);
    v4 = (unsigned __int64 *)(a1 + 80);
    v5 = KeAbPreAcquire(a1 + 80, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    if ( (_DWORD)v3 )
    {
      v7 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 1696), v1) == 1 )
          HvMarkDirtyForFlush(a1);
        ++v1;
        v7 += 512;
        --v3;
      }
      while ( v3 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  HvFreeDirtyData(a1);
}
