/*
 * XREFs of SepIsSidEqual @ 0x1409CE468
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 */

char __fastcall SepIsSidEqual(void *a1, void *a2)
{
  if ( a1 )
  {
    if ( !a2 || !RtlEqualSid(a1, a2) )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
