/*
 * XREFs of MiGetNewSessionId @ 0x140757858
 * Callers:
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 MiGetNewSessionId()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  __int64 v4; // rsi
  ULONG ClearBitsAndSet; // edi
  char v6; // al
  bool v7; // zf
  unsigned int v9; // ebp
  RTL_BITMAP *Pool; // rax
  RTL_BITMAP *v11; // r14
  unsigned __int64 SizeOfBitMap; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140C65650, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65650, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140C65650, v1, (__int64)&qword_140C65650);
  v4 = 0LL;
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C69590, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v9 = qword_140C69590->SizeOfBitMap + 128;
    if ( v9 > 0x7FFFF )
      v9 = 0x7FFFF;
    Pool = (RTL_BITMAP *)MiAllocatePool(256, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0) + 2), 0x20206D4Du);
    v11 = Pool;
    if ( Pool )
    {
      Pool->SizeOfBitMap = v9;
      Pool->Buffer = &Pool[1].SizeOfBitMap;
      RtlClearAllBits(Pool);
      SizeOfBitMap = qword_140C69590->SizeOfBitMap;
      LOBYTE(v4) = (SizeOfBitMap & 0x3F) != 0;
      memmove(v11->Buffer, qword_140C69590->Buffer, 8 * ((SizeOfBitMap >> 6) + v4));
      ExFreePoolWithTag(qword_140C69590, 0);
      qword_140C69590 = v11;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v11, 1u, 0);
    }
  }
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65650, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65650);
  KeAbPostRelease((ULONG_PTR)&qword_140C65650);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return ClearBitsAndSet;
}
