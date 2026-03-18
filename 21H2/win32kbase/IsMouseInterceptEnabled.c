/*
 * XREFs of IsMouseInterceptEnabled @ 0x1C01E8010
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DE5A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01FA8BC (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 */

bool IsMouseInterceptEnabled()
{
  __int64 MouseProcessor; // rcx
  bool result; // al

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  result = 0;
  if ( MouseProcessor )
    return CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
             (CMouseProcessor::MouseInterceptState *)(MouseProcessor + 3704),
             0LL);
  return result;
}
