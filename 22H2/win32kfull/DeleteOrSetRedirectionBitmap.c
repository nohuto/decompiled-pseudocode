/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C00C825C
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00588D8 (zzzDwmStartRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C87AC (DeleteOldRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BCEF0 (UserRecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00C830C (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 120) = a2;
  }
  else
  {
    GreSetRedirection(a2);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDereferenceObject(a2, 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(HSURF *)(result + 120) )
      *(_QWORD *)(result + 120) = 0LL;
  }
  return result;
}
