/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0215D38
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC724 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0211110 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C021118C (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0232030 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0232148 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2)
{
  void *v2; // r8
  void *v3; // rdi
  void *v5; // r9
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  DelayZoneTelemetry *v14; // rcx
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v2 = (void *)*((_QWORD *)this + 4);
  v3 = a2;
  if ( v2 && v2 == a2 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        21,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        *((_QWORD *)this + 4));
    }
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 4) = 0LL;
    if ( !*((_DWORD *)this + 10) )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 && v5 == v3 )
  {
    v6 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        22,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        *((_QWORD *)this + 2));
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    if ( *((_DWORD *)this + 1) == 1 )
    {
      v7 = SGDGetUserSessionState(v6, a2, v2, v5);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v7 + 16840), 1, 0);
      v11 = *((_QWORD *)this + 16);
      *((_BYTE *)this + 8) = 0;
      if ( v11 )
      {
        v12 = *((unsigned int *)this + 1);
        v15 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v11, v12, v9, 2LL, &v15);
      }
      v13 = SGDGetUserSessionState(v11, v8, v9, v10);
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(*(CHidInput **)(v13 + 16840));
      *((_BYTE *)this + 9) = 1;
    }
    if ( *((_DWORD *)this + 1) == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v14 = (DelayZoneTelemetry *)*((_QWORD *)this + 16);
  if ( v14 )
    DelayZoneTelemetry::ClearSession(v14);
}
