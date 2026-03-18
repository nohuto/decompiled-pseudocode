/*
 * XREFs of AdtpAppendZString @ 0x140A5B8EC
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x140A5BDE4 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     AdtpAppendString @ 0x140A5B754 (AdtpAppendString.c)
 */

__int64 __fastcall AdtpAppendZString(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  RtlInitUnicodeString(&v8, a3);
  return AdtpAppendString(a1, a2, &v8, a4);
}
