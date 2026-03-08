/*
 * XREFs of SepAdtInitializeBounds @ 0x140841D58
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1407FCD30 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B615C0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SepRegQueryValue @ 0x1407394A4 (SepRegQueryValue.c)
 */

void SepAdtInitializeBounds()
{
  unsigned int v0; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v1; // [rsp+34h] [rbp-14h]

  if ( SepAdtRegNotifyHandle
    && (int)SepRegQueryValue(SepAdtRegNotifyHandle, L"Bounds", 3, 8u, &v0) >= 0
    && v1 < v0
    && v1 >= 0x10
    && v0 - v1 >= 0x10 )
  {
    SepAdtMinListLength = v1;
    SepAdtMaxListLength = v0;
  }
}
