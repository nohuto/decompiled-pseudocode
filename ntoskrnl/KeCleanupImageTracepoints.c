/*
 * XREFs of KeCleanupImageTracepoints @ 0x1407F7618
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KeCleanupImageTracepoints(__int64 a1)
{
  unsigned __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // r15
  void **v5; // rdi
  void **v6; // r14
  void **v7; // rcx
  void **v8; // rsi
  void *v9; // rax
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( qword_140D1F2A0 )
    qword_140D1F2A0();
  if ( KiTpHashTable )
  {
    v2 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v4 = v2 + *(unsigned int *)(a1 + 64) - 1LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
    v5 = (void **)((char *)KiTpHashTable + 8 * ((v2 >> 4) & 0x3FFF));
    v6 = (void **)((char *)KiTpHashTable + 8 * ((v4 >> 4) & 0x3FFF));
    while ( v5 <= v6 )
    {
      v7 = (void **)*v5;
      v8 = v5;
      while ( v7 )
      {
        v9 = v7[1];
        if ( (unsigned __int64)v9 < v2 || (unsigned __int64)v9 > v4 )
        {
          v8 = v7;
        }
        else
        {
          if ( *((_BYTE *)v7 + 48) )
            --KiTpEnabledCount;
          *v8 = *v7;
          _InterlockedOr(v10, 0);
          --KiTpRegisteredCount;
          while ( KiTpActiveTrapsCount )
            _mm_pause();
          ExFreePoolWithTag(v7, 0x70727446u);
        }
        v7 = (void **)*v8;
      }
      ++v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegion();
  }
}
