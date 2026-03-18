/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C0097CF8
 * Callers:
 *     CleanupInputDelegation @ 0x1C0097BF0 (CleanupInputDelegation.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0097C70 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1C0097D84 (_anonymous_namespace_--ScrubDelegateThread.c)
 *     IsClearDelegationCaptureSupported @ 0x1C0097DBC (IsClearDelegationCaptureSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 264);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_DWORD *)(a1 + 260) = 0;
    --*(_DWORD *)(v5 + 1304);
    --*(_DWORD *)(v3 + 1304);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
      if ( *(_QWORD *)(v6 + 136) == a1 )
      {
        if ( qword_1C029BE48 )
          qword_1C029BE48(v6);
      }
    }
    if ( !*(_DWORD *)(v3 + 1304) )
    {
      anonymous_namespace_::ScrubDelegateThread(v3);
      return 1;
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  return 0;
}
