/*
 * XREFs of ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C0042BDC
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C003AFE4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserUnregisterHotKey @ 0x1C0042B50 (NtUserUnregisterHotKey.c)
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C0042C40 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
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
    UserSetLastError(1419LL);
    return 0LL;
  }
}
