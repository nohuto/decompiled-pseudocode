/*
 * XREFs of WPP_IFR_SF_DD @ 0x1C0020804
 * Callers:
 *     imp_WdfRequestGetCompletionParams @ 0x1C000D5A0 (imp_WdfRequestGetCompletionParams.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C0021150 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C0032320 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfInterruptCreate @ 0x1C0067D20 (imp_WdfInterruptCreate.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0074544 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0074DA4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_DD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        unsigned int _a2,
        unsigned int globals_0)
{
  int v10; // eax
  unsigned __int64 v11; // r11

  v10 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v10, ((_BYTE)id - 1) & 0x1F) )
  {
    v11 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v11 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v11),
        0x2Bu,
        _a1,
        traceGuid,
        &_a2,
        4LL,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 4LL, &globals_0, 4LL, 0LL);
}
