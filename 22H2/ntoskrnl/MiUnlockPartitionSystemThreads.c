/*
 * XREFs of MiUnlockPartitionSystemThreads @ 0x1403B5D30
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1407470A8 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *v4; // rax

  v3 = a1 + 208;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 208), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 208));
  LOBYTE(v4) = KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
