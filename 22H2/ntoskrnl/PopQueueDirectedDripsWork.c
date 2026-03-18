/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14035E054
 * Callers:
 *     PopDirectedDripsSetDisengageReason @ 0x14035DF84 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14035DFE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1409836E0 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140B51E7C (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C3F1C8);
  v2 = _InterlockedOr64(&qword_140C3F1C8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C3F1D8, 0, 0);
  return v2;
}
