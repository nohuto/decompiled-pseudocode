/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1402F3054
 * Callers:
 *     PopDirectedDripsSetDisengageReason @ 0x1402F2F84 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1402F2FE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140980630 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140B46FF8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C3ED88);
  v2 = _InterlockedOr64(&qword_140C3ED88, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C3ED98, 0, 0);
  return v2;
}
