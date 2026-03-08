/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C022EC68
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C022B2E4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(__int64 a1)
{
  unsigned int CurrentThreadId; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v6; // ecx

  if ( !*(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8101);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 36) && CurrentThreadId != *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8111);
  v4 = *(_DWORD *)(a1 + 32);
  if ( v3 == v4 )
    return 1LL;
  v6 = *(_DWORD *)(a1 + 36);
  if ( v3 != v6 )
    return 2LL;
  if ( v4 == v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8131);
  return 0LL;
}
