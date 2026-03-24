/*
 * XREFs of IsShellProcess @ 0x1C003C638
 * Callers:
 *     _RegisterHotKey @ 0x1C0032C74 (_RegisterHotKey.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C003AEB8 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C003C2A0 (CheckAllowForeground.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00D7770 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C011E120 (NtUserGetWindowProcessHandle.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0122D00 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0132B90 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C0200A50 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C02020D0 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 336);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
