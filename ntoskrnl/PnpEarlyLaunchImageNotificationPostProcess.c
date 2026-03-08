/*
 * XREFs of PnpEarlyLaunchImageNotificationPostProcess @ 0x140B65630
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

void __fastcall PnpEarlyLaunchImageNotificationPostProcess(__int64 a1, __int64 a2, int *a3, int *a4, __int64 a5)
{
  __int64 v7; // rdx

  PnpDiagnosticTraceObject(&KMPnPEvt_EarlyLaunch_LoadNotification_Stop, (unsigned __int16 *)(a5 + 8));
  v7 = *a3;
  if ( *((_DWORD *)PnpClassificationRank + v7) > *((_DWORD *)PnpClassificationRank + *a4) )
    *a4 = v7;
  RtlFreeUnicodeString((PUNICODE_STRING)(a3 + 2));
  RtlFreeUnicodeString((PUNICODE_STRING)(a3 + 14));
  RtlFreeUnicodeString((PUNICODE_STRING)(a3 + 10));
}
