/*
 * XREFs of SepReleaseAuditPolicy @ 0x1409CADCC
 * Callers:
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
