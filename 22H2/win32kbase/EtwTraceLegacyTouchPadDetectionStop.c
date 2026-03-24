/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStop @ 0x1C00B8230
 * Callers:
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014FC98 (RIMVirtCreateDev.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124850 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceLegacyTouchPadDetectionStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LegacyTouchPadDetectionStop, &W32kControlGuid);
  return result;
}
