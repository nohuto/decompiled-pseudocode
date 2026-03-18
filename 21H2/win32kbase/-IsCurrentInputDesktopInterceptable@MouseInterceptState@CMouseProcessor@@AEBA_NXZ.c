/*
 * XREFs of ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C01FB07C
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01F9538 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01FA8BC (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01FAF68 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01FB0B4 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     ApiSetEdtionGetInputDesktopId @ 0x1C020C3DC (ApiSetEdtionGetInputDesktopId.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(
        CMouseProcessor::MouseInterceptState *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 16) )
    return *((_QWORD *)this + 3) == ApiSetEdtionGetInputDesktopId();
  return v1;
}
