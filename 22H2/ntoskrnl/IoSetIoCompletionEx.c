/*
 * XREFs of IoSetIoCompletionEx @ 0x14031A7E0
 * Callers:
 *     PspSendReliableJobNotification @ 0x140779E2C (PspSendReliableJobNotification.c)
 *     NtSetIoCompletionEx @ 0x14077A340 (NtSetIoCompletionEx.c)
 *     PspNotificationPacketCallback @ 0x1407E7120 (PspNotificationPacketCallback.c)
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x14031A830 (IoSetIoCompletionEx3.c)
 */

__int64 __fastcall IoSetIoCompletionEx(int a1, int a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  return IoSetIoCompletionEx3(a1, a2, a3, a4, a5, a6, a7, 0, 0);
}
