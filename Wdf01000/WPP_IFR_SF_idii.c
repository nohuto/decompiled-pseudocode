/*
 * XREFs of WPP_IFR_SF_idii @ 0x1C005C160
 * Callers:
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C005BDBC (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_idii(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        __int64 globals_0,
        int level,
        __int64 flags,
        __int64 id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_usbutil_cpp_Traceguids,
      0xCu,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0xEu, WPP_usbutil_cpp_Traceguids, 0xCu, &globals_0, 8LL, &level, 4LL, &flags, 8LL, &id, 8LL, 0LL);
}
