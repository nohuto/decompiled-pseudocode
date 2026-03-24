/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14037A5A8
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14037A4DC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A544 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x14078DB18 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408E3294 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140A40650 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24C28);
  v2 = _InterlockedOr64(&qword_140C24C28, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24C38, 0, 0);
  return v2;
}
