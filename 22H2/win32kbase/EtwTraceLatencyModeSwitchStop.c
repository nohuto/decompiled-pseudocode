/*
 * XREFs of EtwTraceLatencyModeSwitchStop @ 0x1C013AB50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceLatencyModeSwitchStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LatencyModeSwitchStop, &W32kControlGuid);
  return result;
}
