/*
 * XREFs of ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C00B632C
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserUnregisterHotKey @ 0x1C00B62A0 (NtUserUnregisterHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B6390 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall _UnregisterHotKey(struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v2) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v3) + 13784) = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419);
    return 0LL;
  }
}
