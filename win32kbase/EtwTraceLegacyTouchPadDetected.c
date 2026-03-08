/*
 * XREFs of EtwTraceLegacyTouchPadDetected @ 0x1C0163AE0
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1C003017C (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceLegacyTouchPadDetected(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LegacyTouchPadDetected, &W32kControlGuid);
  return result;
}
