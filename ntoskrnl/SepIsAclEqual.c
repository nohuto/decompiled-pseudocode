/*
 * XREFs of SepIsAclEqual @ 0x1409CE3E8
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

char __fastcall SepIsAclEqual(_WORD *a1, _WORD *a2)
{
  if ( a1 )
  {
    if ( !a2 || a1[1] != a2[1] || RtlCompareMemory(a1, a2, (unsigned __int16)a1[1]) != (unsigned __int16)a1[1] )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
