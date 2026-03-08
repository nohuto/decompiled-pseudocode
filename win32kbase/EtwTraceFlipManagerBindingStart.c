/*
 * XREFs of EtwTraceFlipManagerBindingStart @ 0x1C01625D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00EE4B6 (McTemplateK0p_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerBindingStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, &FlipManagerBindingStart, &W32kControlGuid, a1);
  return result;
}
