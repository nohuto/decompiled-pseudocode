/*
 * XREFs of SeReleaseAcl @ 0x1406BA32C
 * Callers:
 *     NtCreateTokenEx @ 0x1406BB530 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
