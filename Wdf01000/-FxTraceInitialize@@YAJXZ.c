/*
 * XREFs of ?FxTraceInitialize@@YAJXZ @ 0x1C002292C
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002BFD8 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxTraceInitialize()
{
  WPP_GLOBAL_WDF_Control.NextDevice = 0LL;
  WPP_GLOBAL_WDF_Control.DriverObject = (_DRIVER_OBJECT *)&WdfTraceGuid;
  LOWORD(WPP_GLOBAL_WDF_Control.Vpb) = 257;
  WPP_GLOBAL_WDF_Control.CurrentIrp = (_IRP *)L"KmdfTraceGuid";
  WPP_GLOBAL_WDF_Control.Timer = (_IO_TIMER *)L" TRACINGFULL TRACINGERROR TRACINGDBGPRINT TRACINGFRAMEWORKS TRACINGAPI TRA"
                                               "CINGAPIERROR TRACINGRESOURCES TRACINGLOCKING TRACINGCONTEXT TRACINGPOOL T"
                                               "RACINGHANDLE TRACINGPNP TRACINGIO TRACINGIOTARGET TRACINGDMA TRACINGREQUE"
                                               "ST TRACINGDRIVER TRACINGDEVICE TRACINGUSEROBJECT TRACINGOBJECT TRACINGPNP"
                                               "POWERSTATES TRACINGIFRCAPTURE";
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Type = WppTraceCallbackWdf;
  IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000001);
  return 0LL;
}
