/*
 * XREFs of SepAdtInitializeCrashOnFail @ 0x14079E508
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14079E3C0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4CB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x1406C56E8 (SepRegQueryValue.c)
 */

__int64 SepAdtInitializeCrashOnFail()
{
  unsigned int v0; // edx
  __int64 result; // rax
  char v2; // al
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  if ( !SepAdtRegNotifyHandle )
    goto LABEL_4;
  result = SepRegQueryValue(SepAdtRegNotifyHandle, L"CrashOnAuditFail", 4, 4u, &v3);
  v0 = result;
  if ( v3 > 2 )
    return result;
  v2 = 1;
  if ( v3 != 1 )
LABEL_4:
    v2 = 0;
  SepCrashOnAuditFail = v2;
  return v0;
}
