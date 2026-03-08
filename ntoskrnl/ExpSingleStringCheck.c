/*
 * XREFs of ExpSingleStringCheck @ 0x140B4A368
 * Callers:
 *     ExpStringCheck @ 0x140B4A084 (ExpStringCheck.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (char *)DestinationString.Buffer, DestinationString.Length);
}
