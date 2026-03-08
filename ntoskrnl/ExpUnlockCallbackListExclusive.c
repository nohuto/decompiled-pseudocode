/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1402F9670
 * Callers:
 *     ExpDeleteCallback @ 0x14067FE80 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  _QWORD *v2; // rax

  LOBYTE(v2) = ExReleasePushLockEx((__int64 *)&ExpCallbackListLock, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
