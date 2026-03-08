/*
 * XREFs of SepFreeResourceInfo @ 0x1402078B8
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(PVOID P)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList();
    ExFreePoolWithTag(P, 0);
  }
}
