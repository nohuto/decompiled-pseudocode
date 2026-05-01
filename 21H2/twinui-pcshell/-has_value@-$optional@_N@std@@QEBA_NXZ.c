/*
 * XREFs of ?has_value@?$optional@_N@std@@QEBA_NXZ @ 0x18043FA40
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

char __fastcall std::optional<bool>::has_value(__int64 a1)
{
  return *(_BYTE *)(a1 + 1);
}
