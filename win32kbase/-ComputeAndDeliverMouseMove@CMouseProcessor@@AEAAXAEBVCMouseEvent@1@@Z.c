/*
 * XREFs of ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C007C2E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        __int64 a3)
{
  const struct CMouseProcessor::CMouseEvent *v3; // rbx
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v3 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      44,
      (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
  v5[1] = *((_QWORD *)v3 + 1);
  v6 = 1;
  v5[0] = &CMouseProcessor::CMoveEvent::`vftable';
  CMouseProcessor::ProcessMouseMove(this, (const struct CMouseProcessor::CMoveEvent *)v5, a3);
}
