/*
 * XREFs of ??4path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011B8AC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028EE30 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::filesystem::path::operator=(__int64 a1, __int64 a2)
{
  std::wstring::operator=(a1, a2);
  return a1;
}
