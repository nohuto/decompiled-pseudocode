/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C014E960
 * Callers:
 *     EnablePTPDevices @ 0x1C0148970 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}
