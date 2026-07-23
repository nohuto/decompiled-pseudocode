/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14037A0F8
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14037A02C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A094 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x14078DCD8 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408E33F4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140A41650 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24C88);
  v2 = _InterlockedOr64(&qword_140C24C88, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24C98, 0, 0);
  return v2;
}
