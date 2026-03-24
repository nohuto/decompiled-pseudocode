/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C00B3BDC
 * Callers:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C008C0FC (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C008C18C (--0CSpatialProcessor@@QEAA@XZ.c)
 *     xxxProcessKeyEvent @ 0x1C01B1150 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetExecutionEvironment()
{
  int v0; // eax
  unsigned int v1; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      196,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0257348 )
    v0 = qword_1C0257348();
  else
    v0 = -1073741637;
  if ( v0 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1607LL);
  if ( qword_1C0257350 )
    v1 = qword_1C0257350();
  else
    v1 = 0;
  if ( !v1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1609LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      197,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v1;
}
