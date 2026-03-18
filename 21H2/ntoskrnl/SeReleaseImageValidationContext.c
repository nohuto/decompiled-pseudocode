/*
 * XREFs of SeReleaseImageValidationContext @ 0x1406B8748
 * Callers:
 *     MiDeleteControlArea @ 0x1402700FC (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1B908 )
    qword_140C1B908();
  else
    ExFreePoolWithTag(a1, 0);
}
