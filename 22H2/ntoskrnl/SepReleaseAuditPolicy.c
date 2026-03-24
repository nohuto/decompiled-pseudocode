/*
 * XREFs of SepReleaseAuditPolicy @ 0x14092103C
 * Callers:
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
