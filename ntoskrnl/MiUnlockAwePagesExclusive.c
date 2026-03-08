/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14064985C
 * Callers:
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x140A3F4A0 (MiResizeAweBitMap.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  LOBYTE(v3) = ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
