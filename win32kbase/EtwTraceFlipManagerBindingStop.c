/*
 * XREFs of EtwTraceFlipManagerBindingStop @ 0x1C0162600
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerBindingStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &FlipManagerBindingStop, &W32kControlGuid);
  return result;
}
