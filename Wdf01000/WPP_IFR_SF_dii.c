/*
 * XREFs of WPP_IFR_SF_dii @ 0x1C005C068
 * Callers:
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C005BDBC (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dii(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a2,
        unsigned int _a3,
        unsigned __int16 a4,
        const _GUID *level,
        int flags,
        __int64 id,
        __int64 traceGuid)
{
  int _a1[4]; // [rsp+60h] [rbp-18h] BYREF

  _a1[0] = 2;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_usbutil_cpp_Traceguids,
      0xBu,
      _a1,
      4LL,
      &id,
      8LL,
      &traceGuid,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0xEu, WPP_usbutil_cpp_Traceguids, 0xBu, _a1, 4LL, &id, 8LL, &traceGuid, 8LL, 0LL);
}
