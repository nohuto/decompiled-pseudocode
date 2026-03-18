/*
 * XREFs of rimObsReadMaxQueueSize @ 0x1C01B553C
 * Callers:
 *     RawInputManagerInputObserverObjectCreate @ 0x1C019A090 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C00D5034 (RIMRegQueryDWord.c)
 */

__int64 rimObsReadMaxQueueSize()
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  RIMRegQueryDWord((__int64)&DestinationString, (__int64)L"RimObserverQueueSize", 256, &v2);
  result = v2;
  if ( v2 > 0xFA00 )
    return 64000LL;
  return result;
}
