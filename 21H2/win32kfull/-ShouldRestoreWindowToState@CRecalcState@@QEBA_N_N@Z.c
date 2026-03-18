/*
 * XREFs of ?ShouldRestoreWindowToState@CRecalcState@@QEBA_N_N@Z @ 0x1C0121F10
 * Callers:
 *     ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C (-FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ @ 0x1C00AFB0C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ.c)
 */

bool __fastcall CRecalcState::ShouldRestoreWindowToState(CMonitorTopology **this, char a2)
{
  int v4; // edx
  char v6; // cl
  const char *v7; // rax
  int v8; // r8d

  if ( !CRecalcState::ShouldStoreAfterProcessing((CRecalcState *)this) )
    return 0;
  if ( a2 != *((_BYTE *)this + 61) )
  {
    v6 = 1;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v4 || v6 )
    {
      v7 = "is";
      if ( !a2 )
        v7 = "isn't";
      v8 = 12;
      LOBYTE(v8) = v6;
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        23,
        12,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        (__int64)v7);
    }
    return 0;
  }
  return CMonitorTopology::IdenticalToCurrent(this[4]);
}
