/*
 * XREFs of SeReleaseAcl @ 0x1405DBD4C
 * Callers:
 *     NtCreateTokenEx @ 0x1405DC930 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
