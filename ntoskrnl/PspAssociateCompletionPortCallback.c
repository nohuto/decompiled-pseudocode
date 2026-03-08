/*
 * XREFs of PspAssociateCompletionPortCallback @ 0x1409AF0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140294B08 (RtlInterlockedSetClearBits.c)
 *     PspSendJobNotification @ 0x14030201C (PspSendJobNotification.c)
 */

__int64 __fastcall PspAssociateCompletionPortCallback(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // r11

  v3 = (volatile signed __int32 *)(a1 + 1120);
  if ( (*v3 & 1) == 0 )
  {
    RtlInterlockedSetClearBits(v3, 4, 32);
    PspSendJobNotification(a2, 6LL, *(_QWORD *)(v4 + 1088), 0);
  }
  return 0LL;
}
