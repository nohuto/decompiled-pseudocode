/*
 * XREFs of ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1803F2D68
 * Callers:
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1803F304C (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1803F3660 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C868C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

LONGLONG __fastcall MultitaskingViewGestureHandler::GetTimestampForPointerInput(
        MultitaskingViewGestureHandler *this,
        unsigned int a2)
{
  LONGLONG v4; // rbx
  const char *v5; // r9
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LARGE_INTEGER v10; // [rsp+90h] [rbp+8h] BYREF

  QueryPerformanceCounter(&v10);
  v4 = 1000000 * v10.QuadPart / *((_QWORD *)this + 18);
  if ( (unsigned int)GetPointerInfo(a2, v7) )
    return v8;
  wil::details::in1diag3::_Log_GetLastError(
    retaddr,
    (void *)0x12B,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    v5);
  return v4;
}
