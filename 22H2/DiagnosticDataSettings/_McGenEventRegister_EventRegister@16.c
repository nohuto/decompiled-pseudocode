/*
 * XREFs of _McGenEventRegister_EventRegister@16 @ 0x1000373E
 * Callers:
 *     _TelSetLocalTelemetrySetting@12 @ 0x100024D0 (_TelSetLocalTelemetrySetting@12.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister_EventRegister(int a1, int a2)
{
  if ( MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context )
    return 0;
  else
    return EventRegister(
             &MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context,
             &MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context);
}
