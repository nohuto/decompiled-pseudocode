/*
 * XREFs of IsMouseInterceptEnabled @ 0x1C0218030
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020E0C0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C00F48D8 (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 */

bool __fastcall IsMouseInterceptEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rcx
  bool result; // al

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  result = 0;
  if ( MouseProcessor )
    return CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
             (CMouseProcessor::MouseInterceptState *)(MouseProcessor + 3704),
             0LL);
  return result;
}
