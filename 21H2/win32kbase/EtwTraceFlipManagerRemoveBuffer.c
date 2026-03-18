/*
 * XREFs of EtwTraceFlipManagerRemoveBuffer @ 0x1C014DE60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpp_EtwWriteTransfer @ 0x1C00D8394 (McTemplateK0qpp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerRemoveBuffer(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qpp_EtwWriteTransfer(a1, &FlipManagerRemoveBuffer, a3, a1, a2, a3);
  return result;
}
