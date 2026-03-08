/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C039C928
 * Callers:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0079FB4 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     EnableUserkTraceLogging @ 0x1C00EC650 (EnableUserkTraceLogging.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00F0134 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00F8120 (--0InkProcessor@@AEAA@XZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C039C844 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
  v6 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, v3);
  if ( !v6 )
    EtwSetInformation(
      *v3,
      EventProviderSetTraits,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v6;
}
