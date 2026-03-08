/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14065E858
 * Callers:
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  _QWORD *v4; // rax

  v3 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  LOBYTE(v4) = KeAbPostRelease(v3);
  *(_BYTE *)(a1 + 1384) &= ~2u;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
