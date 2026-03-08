/*
 * XREFs of IoSetIoCompletionEx @ 0x140292850
 * Callers:
 *     PspSendReliableJobNotification @ 0x1406F4D9C (PspSendReliableJobNotification.c)
 *     NtSetIoCompletionEx @ 0x1406F7950 (NtSetIoCompletionEx.c)
 *     PspNotificationPacketCallback @ 0x140797BA0 (PspNotificationPacketCallback.c)
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x1402928A0 (IoSetIoCompletionEx3.c)
 */

__int64 __fastcall IoSetIoCompletionEx(int a1, int a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  return IoSetIoCompletionEx3(a1, a2, a3, a4, a5, a6, a7, 0, 0);
}
