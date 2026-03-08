/*
 * XREFs of CheckCapability @ 0x1C0217620
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C016C8F0 (NtSetCursorInputSpace.c)
 *     NtSetShellCursorState @ 0x1C016D020 (NtSetShellCursorState.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1C0176080 (NtUserSetDesktopVisualInputSink.c)
 *     NtUserSetSystemContentRects @ 0x1C0178070 (NtUserSetSystemContentRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckCapability(PCWSTR SourceString)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = RtlCapabilityCheck(0LL, &DestinationString, &v3);
  if ( (int)result >= 0 && !v3 )
    return 3221225506LL;
  return result;
}
