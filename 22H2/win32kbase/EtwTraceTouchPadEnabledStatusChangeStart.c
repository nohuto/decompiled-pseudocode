/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C013B3A0
 * Callers:
 *     EnablePTPDevices @ 0x1C0134C80 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}
