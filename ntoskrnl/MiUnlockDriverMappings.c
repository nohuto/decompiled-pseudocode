/*
 * XREFs of MiUnlockDriverMappings @ 0x14036C434
 * Callers:
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x1407F74BC (MiReleaseDriverPtes.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockDriverMappings(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C655B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C655B8);
  LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)&qword_140C655B8);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
