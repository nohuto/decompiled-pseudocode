/*
 * XREFs of EtwTraceTouchTargetingWindowHitTestStop @ 0x1C013B7B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchTargetingWindowHitTestStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchTargetingWindowHitTestStop, &W32kControlGuid);
  return result;
}
