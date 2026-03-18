/*
 * XREFs of SepReleaseAuditPolicy @ 0x1409CA904
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
