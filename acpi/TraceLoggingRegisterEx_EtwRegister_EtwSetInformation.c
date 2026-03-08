/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C007A840
 * Callers:
 *     AcpiDiagInitialize @ 0x1C00A71E8 (AcpiDiagInitialize.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1C00ABA48 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(char *CallbackContext)
{
  ULONGLONG *v1; // rsi
  bool v2; // zf
  unsigned int v4; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = (ULONGLONG *)(CallbackContext + 32);
  v2 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v2 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = 0LL;
  *((_QWORD *)CallbackContext + 6) = 0LL;
  v4 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, v1);
  if ( !v4 )
    EtwSetInformation(
      *v1,
      EventProviderSetTraits,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v4;
}
