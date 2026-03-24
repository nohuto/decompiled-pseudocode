/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x14074C4D8
 * Callers:
 *     PoFxAbandonDevice @ 0x14074B988 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x1407D5080 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x140370AE4 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x1407B495C (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
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
