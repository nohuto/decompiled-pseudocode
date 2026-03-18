/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0049018
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  bool v2; // dl
  _UNKNOWN **v3; // rax
  LONG v4; // r8d

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v3 = &WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LODWORD(v3) = WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v2,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    (_DWORD)gRimLog,
                    4,
                    1,
                    43,
                    (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
                    a1);
  v4 = *(_DWORD *)(a1 + 1104);
  if ( v4 )
  {
    LODWORD(v3) = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1096), 0, v4, 0);
    *(_DWORD *)(a1 + 1104) = 0;
  }
  return (int)v3;
}
