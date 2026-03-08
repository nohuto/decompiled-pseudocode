/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C008F5C0
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0041448 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0090534 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(char *CallbackContext, __int64 a2, __int64 a3)
{
  ULONGLONG *v3; // rsi
  bool v4; // zf
  unsigned int v6; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (ULONGLONG *)(CallbackContext + 32);
  v4 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = a2;
  *((_QWORD *)CallbackContext + 6) = a3;
  v6 = EtwRegister(&ProviderId, (PETWENABLECALLBACK)tlgEnableCallback, CallbackContext, v3);
  if ( !v6 )
    EtwSetInformation(
      *v3,
      EventProviderSetTraits,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v6;
}
