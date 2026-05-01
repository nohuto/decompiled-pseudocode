/*
 * XREFs of ??$value_or@_N@?$optional@_N@std@@QEGBA_N$$QEA_N@Z @ 0x18014789C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

char __fastcall std::optional<bool>::value_or<bool>(_BYTE *a1, __int64 a2)
{
  if ( a1[1] )
    return *a1;
  else
    return *(_BYTE *)a2;
}
