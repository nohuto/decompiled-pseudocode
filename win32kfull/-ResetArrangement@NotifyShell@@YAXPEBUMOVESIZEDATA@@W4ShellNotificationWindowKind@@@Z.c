/*
 * XREFs of ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1C02205FC
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     WPP_RECORDER_AND_TRACE_SF_dds @ 0x1C02220B4 (WPP_RECORDER_AND_TRACE_SF_dds.c)
 */

bool __fastcall NotifyShell::ResetArrangement(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi

  v2 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (LOBYTE(a2) = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dds(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      20);
  return anonymous_namespace_::NotifyShellSimplePayload(
           **(_QWORD **)(a1 + 16),
           3,
           0LL,
           *(unsigned __int16 *)(a1 + 268) | (*(unsigned __int16 *)(a1 + 272) << 16),
           v2);
}
