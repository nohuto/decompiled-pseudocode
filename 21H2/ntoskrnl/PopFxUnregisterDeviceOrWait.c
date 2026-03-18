/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x14080D7EC
 * Callers:
 *     PoFxAbandonDevice @ 0x140766E4C (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x140864C90 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x1403A4868 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 */

NTSTATUS __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
