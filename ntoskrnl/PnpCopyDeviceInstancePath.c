/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x140861B34
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
