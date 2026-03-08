/*
 * XREFs of MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A445E8
 * Callers:
 *     MiSpecialPurposeMemoryRemoved @ 0x140A44BE4 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x140A44D34 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14065DBE8 (MiFindSpecialPurposeMemoryType.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryTypeByPartition(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v5; // r14
  _QWORD *v8; // rbx
  __int64 v9; // r15
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *SpecialPurposeMemoryType; // rax
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(__int64 **)(a1 + 16944);
  v8 = 0LL;
  if ( PsReferencePartitionSafe((__int64)v5) )
  {
    v9 = *v5;
    --CurrentThread->SpecialApcDisable;
    v10 = (volatile signed __int64 *)(v9 + 16992);
    v11 = KeAbPreAcquire(v9 + 16992, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16992), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16992), v11, v9 + 16992);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v9, (const void *)(a1 + 16960));
    v8 = SpecialPurposeMemoryType;
    if ( SpecialPurposeMemoryType && SpecialPurposeMemoryType[8] == a1 )
    {
      *a2 = v9;
      *a3 = v10;
    }
    else
    {
      v8 = 0LL;
      if ( v9 != -16992 )
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 16992));
        KeAbPostRelease(v9 + 16992);
        v14 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v14
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      PsDereferencePartition((__int64)v5);
    }
  }
  return v8;
}
