/*
 * XREFs of ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x1C0222770
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C0220200 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C000431C (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00CBBC4 (ApiSetEditionInternalSetCursorPos.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IVForegroundSync::ivReceiveForegroundUpdate(
        IVForegroundSync *this,
        const struct _IVForegroundPacket *a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      21,
      (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids,
      *(_QWORD *)this,
      *((_DWORD *)this + 2));
  v4 = *(_QWORD *)((char *)this + 12);
  if ( v4 != 0xFFFF8300FFFF8300uLL )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        22,
        (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids,
        v4,
        SBYTE4(v4));
    }
    ApiSetEditionInternalSetCursorPos(v4, HIDWORD(v4), 2LL);
  }
  v5 = 0LL;
  if ( *((_DWORD *)this + 2) != 1 )
    v5 = *(_QWORD *)this;
  if ( qword_1C02D76D0 )
    qword_1C02D76D0(v5, a2, a3);
}
