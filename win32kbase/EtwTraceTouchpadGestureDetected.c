/*
 * XREFs of EtwTraceTouchpadGestureDetected @ 0x1C0164770
 * Callers:
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C020F1BC (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchpadGestureDetected(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchpadGestureDetected, &W32kControlGuid);
  return result;
}
