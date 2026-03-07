void __fastcall WPP_IFR_SF_qD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        unsigned int globals_0)
{
  int v10; // eax
  unsigned __int64 v11; // r11

  v10 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v10, ((_BYTE)id - 1) & 0x1F) )
  {
    v11 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v11 + 1) >= 5u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v11),
        0x2Bu,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 5u, id, _a1, traceGuid, &_a2, 8LL, &globals_0, 4LL, 0LL);
}
