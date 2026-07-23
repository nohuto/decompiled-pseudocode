/*
 * XREFs of SeReleaseImageValidationContext @ 0x14078EA34
 * Callers:
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1DB48 )
    qword_140C1DB48();
  else
    ExFreePoolWithTag(a1, 0);
}
