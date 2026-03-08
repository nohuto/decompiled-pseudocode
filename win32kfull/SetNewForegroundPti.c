/*
 * XREFs of SetNewForegroundPti @ 0x1C009B3E0
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C009B8A4 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundPti(PETHREAD *a1)
{
  int v2; // edx
  bool v3; // di
  bool v4; // si
  char ThreadId; // bp
  char v6; // al
  __int64 result; // rax

  v2 = (int)WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      ThreadId = (unsigned __int8)PsGetThreadId(*a1);
    else
      ThreadId = 0;
    if ( gptiForeground )
      v6 = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiForeground);
    else
      v6 = 0;
    LOBYTE(v2) = v3;
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v4,
      (_DWORD)gFullLog,
      4,
      2,
      85,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      v6,
      ThreadId);
  }
  result = gptiForeground;
  gptiForeground = a1;
  return result;
}
