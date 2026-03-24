/*
 * XREFs of ?CheckCapability@@YAJPEBG@Z @ 0x1C0128680
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C012CA20 (NtSetCursorInputSpace.c)
 *     NtSetShellCursorState @ 0x1C012D180 (NtSetShellCursorState.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1C0133600 (NtUserSetDesktopVisualInputSink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckCapability(const unsigned __int16 *a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING v2; // [rsp+20h] [rbp-18h] BYREF
  const unsigned __int16 *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  LOBYTE(v3) = 0;
  v2 = 0LL;
  RtlInitUnicodeString(&v2, L"shellExperienceComposer");
  result = RtlCapabilityCheck(0LL, &v2, &v3);
  if ( (int)result >= 0 && !(_BYTE)v3 )
    return 3221225506LL;
  return result;
}
