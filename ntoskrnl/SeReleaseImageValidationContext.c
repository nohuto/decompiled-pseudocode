/*
 * XREFs of SeReleaseImageValidationContext @ 0x14079C458
 * Callers:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C37628 )
    qword_140C37628();
  else
    ExFreePoolWithTag(a1, 0);
}
