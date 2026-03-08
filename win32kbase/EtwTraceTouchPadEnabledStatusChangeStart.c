/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C0164300
 * Callers:
 *     EnablePTPDevices @ 0x1C015CA90 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}
