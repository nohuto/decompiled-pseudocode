/*
 * XREFs of WPP_IFR_SF_qDDd @ 0x1C0049E00
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C004A290 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C0075CD4 (-ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0039BF8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDDd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        unsigned int _a3,
        unsigned int globals_0)
{
  int v11; // eax
  unsigned __int64 v12; // r11
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1073741811;
  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, ((_BYTE)id - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &_a3,
        4LL,
        &globals_0,
        4LL,
        _a4,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 8LL, &_a3, 4LL, &globals_0, 4LL, _a4, 4LL, 0LL);
}
