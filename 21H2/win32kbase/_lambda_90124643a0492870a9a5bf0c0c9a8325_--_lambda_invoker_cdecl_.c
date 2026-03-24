/*
 * XREFs of _lambda_90124643a0492870a9a5bf0c0c9a8325_::_lambda_invoker_cdecl_ @ 0x1C00CC6B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceInputMode @ 0x1C00ACD80 (RIMSetDeviceInputMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_90124643a0492870a9a5bf0c0c9a8325_::_lambda_invoker_cdecl_(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 i; // rbx

  v2 = *a2;
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (unsigned int)RIMSetDeviceInputMode(i, v2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 349LL);
  }
}
