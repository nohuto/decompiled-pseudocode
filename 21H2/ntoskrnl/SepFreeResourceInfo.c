/*
 * XREFs of SepFreeResourceInfo @ 0x1402A4660
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x1402FBC90 (SepFilterCheck.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(_DWORD *P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(P, 0);
  }
}
