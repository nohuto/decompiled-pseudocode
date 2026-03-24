/*
 * XREFs of SepReleaseAuditPolicy @ 0x140920FEC
 * Callers:
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
