/*
 * XREFs of SeReleaseImageValidationContext @ 0x14078E774
 * Callers:
 *     MiDeleteControlArea @ 0x140278164 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14066B20C (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1DB48 )
    qword_140C1DB48();
  else
    ExFreePoolWithTag(a1, 0);
}
