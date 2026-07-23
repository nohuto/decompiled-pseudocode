/*
 * XREFs of SepAdtInitializeBounds @ 0x14079E424
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14079E3C0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4CB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SepRegQueryValue @ 0x1406C56E8 (SepRegQueryValue.c)
 */

void SepAdtInitializeBounds()
{
  unsigned __int64 v0; // kr00_8
  unsigned __int64 v1; // [rsp+30h] [rbp-18h] BYREF

  if ( SepAdtRegNotifyHandle
    && (int)SepRegQueryValue(SepAdtRegNotifyHandle, L"Bounds", 3, 8u, &v1) >= 0
    && HIDWORD(v1) < (unsigned int)v1
    && HIDWORD(v1) >= 0x10
    && (unsigned int)(v1 - HIDWORD(v1)) >= 0x10 )
  {
    v0 = v1;
    SepAdtMinListLength = HIDWORD(v0);
    SepAdtMaxListLength = v0;
  }
}
