/*
 * XREFs of SeReleaseImageValidationContext @ 0x14078E874
 * Callers:
 *     MiDeleteControlArea @ 0x1402F7AE4 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140714C70 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1DB28 )
    qword_140C1DB28();
  else
    ExFreePoolWithTag(a1, 0);
}
