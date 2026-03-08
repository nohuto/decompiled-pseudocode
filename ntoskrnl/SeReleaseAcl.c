/*
 * XREFs of SeReleaseAcl @ 0x14070E89C
 * Callers:
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
