/*
 * XREFs of WPP_IFR_SF_qcd @ 0x1C0062FFC
 * Callers:
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C00621F0 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qcd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        char id)
{
  int _a3[6]; // [rsp+60h] [rbp-18h] BYREF

  _a3[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgIo_cpp_Traceguids,
      0x16u,
      &flags,
      8LL,
      &id,
      1LL,
      _a3,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0x12u, WPP_FxPkgIo_cpp_Traceguids, 0x16u, &flags, 8LL, &id, 1LL, _a3, 4LL, 0LL);
}
