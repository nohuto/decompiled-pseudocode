/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01E5FB0
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CEE84 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01E1AF0 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01E1B78 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01F7C78 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01F7D94 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2)
{
  void *v2; // r8
  void *v3; // rdi
  void *v5; // r8
  CHidInput *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  CHidInput *v9; // rcx
  __int64 v10; // rdx
  DelayZoneTelemetry *v11; // rcx
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

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
    v6 = (CHidInput *)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        22,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        *((_QWORD *)this + 2));
    }
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    v7 = *((_DWORD *)this + 1);
    if ( v7 == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v6, 1, 0);
      v9 = (CHidInput *)*((_QWORD *)this + 16);
      *((_BYTE *)this + 8) = 0;
      if ( v9 )
      {
        v10 = *((unsigned int *)this + 1);
        v12 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v9, v10, v8, 2LL, &v12);
      }
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(v9);
      v7 = *((_DWORD *)this + 1);
      *((_BYTE *)this + 9) = 1;
    }
    if ( v7 == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v11 = (DelayZoneTelemetry *)*((_QWORD *)this + 16);
  if ( v11 )
    DelayZoneTelemetry::ClearSession(v11);
}
