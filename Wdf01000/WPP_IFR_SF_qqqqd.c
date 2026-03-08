/*
 * XREFs of WPP_IFR_SF_qqqqd @ 0x1C0037F70
 * Callers:
 *     imp_WdfLookasideListCreate @ 0x1C0038110 (imp_WdfLookasideListCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C00508A4 (FxIoTargetValidateOpenParams.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x1C00518B0 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqqqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        const void *_a3,
        const void *_a4,
        const void *_a5,
        int globals_0)
{
  int v13; // eax
  unsigned __int64 v14; // r11

  v13 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v13, ((_BYTE)id - 1) & 0x1F) )
  {
    v14 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v14 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v14),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &_a3,
        8LL,
        &_a4,
        8LL,
        &_a5,
        8LL,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 8LL, &_a3, 8LL, &_a4, 8LL, &_a5, 8LL, &globals_0, 4LL, 0LL);
}
