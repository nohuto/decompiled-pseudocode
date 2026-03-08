/*
 * XREFs of ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C02292BC
 * Callers:
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C0101F0C (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00FF0A0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B6860 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 */

void __fastcall CRecalcProp::s_PostRecalcForWindow(PETHREAD **a1)
{
  char v2; // di
  char v3; // bp
  char v4; // si
  PETHREAD *v5; // rbx
  char v6; // si
  PETHREAD *v7; // rbx
  __int64 v8; // [rsp+40h] [rbp-28h]
  unsigned int ThreadId; // [rsp+40h] [rbp-28h]

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( v3 || v4 )
  {
    v5 = *a1;
    ThreadId = (unsigned int)PsGetThreadId(*a1[2]);
    WPP_RECORDER_AND_TRACE_SF_dq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (__int64)gFullLog,
      5u,
      0x17u,
      0x3Du,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      ThreadId,
      v5);
  }
  if ( !PostEventMessageWindow((struct tagTHREADINFO **)a1, 0x16u, 0LL, 0LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *a1;
      LODWORD(v8) = (unsigned int)PsGetThreadId(*a1[2]);
      WPP_RECORDER_AND_TRACE_SF_dq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v6,
        (__int64)gFullLog,
        2u,
        0x17u,
        0x3Eu,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        v8,
        v7);
    }
  }
}
