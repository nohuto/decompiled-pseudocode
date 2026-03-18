/*
 * XREFs of SepIsAclEqual @ 0x1409D1288
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC7B0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1980 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
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
