/*
 * XREFs of EtwTraceForegroundWindowFullScreenStart @ 0x1C01638F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceForegroundWindowFullScreenStart(const GUID *a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0_EtwWriteTransfer((__int64)a1, &ForegroundWindowFullScreenStart, a1);
  return result;
}
