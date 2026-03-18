/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C00C2EBC
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B713C (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  bool v2; // dl
  _UNKNOWN **result; // rax

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            WPP_GLOBAL_Control->AttachedDevice,
                            v2,
                            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                            (_DWORD)gRimLog,
                            4,
                            1,
                            37,
                            (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
                            a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 188) &= 0xFFFFFFF3;
  return result;
}
