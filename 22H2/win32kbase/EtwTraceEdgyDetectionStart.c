/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C01391C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &EdgyDetectionStart, &W32kControlGuid);
  return result;
}
