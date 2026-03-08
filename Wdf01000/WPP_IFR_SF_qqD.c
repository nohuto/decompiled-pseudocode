/*
 * XREFs of WPP_IFR_SF_qqD @ 0x1C0050A64
 * Callers:
 *     FxIoTargetSendIo @ 0x1C000E794 (FxIoTargetSendIo.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C0056BB0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *globals_0,
        unsigned int level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a2,
      _a1,
      &_a3,
      8LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      0LL);
  FxIFR(globals, 5u, 0xEu, _a2, _a1, &_a3, 8LL, &globals_0, 8LL, &level, 4LL, 0LL);
}
