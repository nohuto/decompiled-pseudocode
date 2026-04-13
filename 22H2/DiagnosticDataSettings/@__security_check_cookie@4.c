/*
 * XREFs of @__security_check_cookie@4 @ 0x10004280
 * Callers:
 *     ?GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z @ 0x10002084 (-GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z.c)
 *     _TelSetLocalTelemetrySetting@12 @ 0x100024D0 (_TelSetLocalTelemetrySetting@12.c)
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 *     _McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56 @ 0x1000340F (_McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56.c)
 *     ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10003898 (-GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z.c)
 *     ?ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z @ 0x10003D78 (-ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}
