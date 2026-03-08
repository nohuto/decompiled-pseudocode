/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C0021D34
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C002E738 (DeleteOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BE090 (UserRecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     GreSetRedirection @ 0x1C0021DE4 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, __int64 a2, int a3)
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
    GreSetRedirection(a2, 0LL);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDereferenceObject(a2, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(_QWORD *)(result + 120) )
      *(_QWORD *)(result + 120) = 0LL;
  }
  return result;
}
