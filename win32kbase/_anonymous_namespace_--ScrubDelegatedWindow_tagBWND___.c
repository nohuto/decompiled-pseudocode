/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C015D4A0
 * Callers:
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00A9160 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C00A91F0 (CleanupInputDelegation.c)
 * Callees:
 *     IsClearDelegationCaptureSupported @ 0x1C00A9300 (IsClearDelegationCaptureSupported.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1C00A932C (_anonymous_namespace_--ScrubDelegateThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 39);
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  --*(_DWORD *)(v4 + 1344);
  --*(_DWORD *)(v1 + 1344);
  if ( (int)IsClearDelegationCaptureSupported() >= 0
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 144LL) == a1 )
  {
    if ( qword_1C02D66F0 )
      qword_1C02D66F0();
  }
  if ( *(_DWORD *)(v1 + 1344) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
