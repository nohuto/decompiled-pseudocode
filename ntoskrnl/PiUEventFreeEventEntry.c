/*
 * XREFs of PiUEventFreeEventEntry @ 0x14068DE0C
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PiUEventDereferenceEventEntry @ 0x14068DA18 (PiUEventDereferenceEventEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeEventEntry(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)P[3];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x59706E50u);
  v3 = (void *)P[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x59706E50u);
  v4 = (void *)P[6];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  ExFreePoolWithTag(P, 0x59706E50u);
}
