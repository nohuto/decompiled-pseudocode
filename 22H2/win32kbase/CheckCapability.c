/*
 * XREFs of CheckCapability @ 0x1C01E7C20
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C0142810 (NtSetCursorInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0142BE0 (NtSetShellCursorState.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1C014A660 (NtUserSetDesktopVisualInputSink.c)
 *     NtUserSetSystemContentRects @ 0x1C014BE50 (NtUserSetSystemContentRects.c)
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
