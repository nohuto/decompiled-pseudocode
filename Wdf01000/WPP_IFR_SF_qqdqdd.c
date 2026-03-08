/*
 * XREFs of WPP_IFR_SF_qqdqdd @ 0x1C0054548
 * Callers:
 *     ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0085160 (-ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00BAEA4 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqdqdd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        const void *_a3,
        int _a4,
        const void *_a5,
        int _a6,
        int globals_0)
{
  int v14; // eax
  unsigned __int64 v15; // r11

  v14 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v14, (id - 1) & 0x1F) )
  {
    v15 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v15 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v15),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &_a3,
        8LL,
        &_a4,
        4LL,
        &_a5,
        8LL,
        &_a6,
        4LL,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 8LL, &_a3, 8LL, &_a4, 4LL, &_a5, 8LL, &_a6, 4LL, &globals_0, 4LL, 0LL);
}
