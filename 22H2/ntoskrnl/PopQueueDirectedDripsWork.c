/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14037A018
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x140379F4C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140379FB4 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x14078DA18 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408E32E4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140A3FA80 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24CA8);
  v2 = _InterlockedOr64(&qword_140C24CA8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24CB8, 0, 0);
  return v2;
}
