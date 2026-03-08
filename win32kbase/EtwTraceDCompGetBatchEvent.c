/*
 * XREFs of EtwTraceDCompGetBatchEvent @ 0x1C0161E20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00EE4B6 (McTemplateK0p_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDCompGetBatchEvent(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, &DCompGetBatchEvent, &W32kControlGuid, a1);
  return result;
}
