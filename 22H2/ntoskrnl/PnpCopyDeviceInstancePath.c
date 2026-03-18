/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x140866334
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AEFA0 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
