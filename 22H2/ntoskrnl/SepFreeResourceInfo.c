/*
 * XREFs of SepFreeResourceInfo @ 0x1402295F8
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228D00 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x1402B5C70 (SepFilterCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8C20 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(PVOID P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(P, 0);
  }
}
