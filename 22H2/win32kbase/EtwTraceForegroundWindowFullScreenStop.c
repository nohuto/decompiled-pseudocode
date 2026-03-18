/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1C013A9C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceForegroundWindowFullScreenStop(const GUID *a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0_EtwWriteTransfer((__int64)a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
