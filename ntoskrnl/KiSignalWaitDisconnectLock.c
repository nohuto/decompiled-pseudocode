/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x140577CEC
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14028E714 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
