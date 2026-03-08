/*
 * XREFs of EtwTraceDitTerminated @ 0x1C0162000
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDitTerminated(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &DitTerminated, &W32kControlGuid);
  return result;
}
