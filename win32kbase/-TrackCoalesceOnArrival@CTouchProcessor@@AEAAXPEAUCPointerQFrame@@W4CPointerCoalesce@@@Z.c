/*
 * XREFs of ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C02069F8
 * Callers:
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C00F2C5A (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0200228 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0206D08 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C0209F24 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 */

_UNKNOWN **__fastcall CTouchProcessor::TrackCoalesceOnArrival(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v4; // rbx
  _UNKNOWN **result; // rax

  v3 = a3;
  v4 = a2;
  LOBYTE(a3) = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(a3) = 0;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dqd(
                            WPP_GLOBAL_Control->AttachedDevice,
                            a2,
                            a3,
                            248,
                            5,
                            7,
                            248,
                            (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
                            *(_DWORD *)v4,
                            *(_QWORD *)(v4 + 8),
                            v3);
  *(_DWORD *)(v4 + 144) = v3;
  return result;
}
