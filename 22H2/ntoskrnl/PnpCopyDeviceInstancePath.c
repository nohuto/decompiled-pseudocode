/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x1407A5614
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x14074E544 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402D3C70 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
