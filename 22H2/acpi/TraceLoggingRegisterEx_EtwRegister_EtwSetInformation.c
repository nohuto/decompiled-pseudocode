/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00A3490
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00BD584 (AcpiIrqLibConfigureLibrary.c)
 *     AcpiDiagInitialize @ 0x1C00BDE98 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(ULONGLONG *CallbackContext)
{
  GUID v2; // xmm0
  unsigned int v3; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  ProviderId = v2;
  v3 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  if ( !v3 )
    EtwSetInformation(
      CallbackContext[4],
      EventProviderSetTraits,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  return v3;
}
