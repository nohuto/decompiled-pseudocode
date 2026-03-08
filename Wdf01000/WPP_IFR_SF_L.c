/*
 * XREFs of WPP_IFR_SF_L @ 0x1C0078B58
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0077FEC (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_L(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_fxpkgfdo_cpp_Traceguids,
      0xBu,
      &id,
      4LL,
      0LL);
  FxIFR(globals, 5u, 0xCu, WPP_fxpkgfdo_cpp_Traceguids, 0xBu, &id, 4LL, 0LL);
}
