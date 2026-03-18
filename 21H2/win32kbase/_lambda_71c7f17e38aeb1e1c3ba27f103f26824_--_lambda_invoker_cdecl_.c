/*
 * XREFs of _lambda_71c7f17e38aeb1e1c3ba27f103f26824_::_lambda_invoker_cdecl_ @ 0x1C00D2CF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceInputMode @ 0x1C00D2D38 (RIMSetDeviceInputMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_71c7f17e38aeb1e1c3ba27f103f26824_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 i; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (unsigned int)RIMSetDeviceInputMode((struct RIMDEV *)i) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  }
}
