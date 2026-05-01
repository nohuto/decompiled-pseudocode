/*
 * XREFs of ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1803F3390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1803F29E0 (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1803F2A98 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1803F2D7C (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 *     ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x1803F3318 (-ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z.c)
 *     ?UpdateTouchpadDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x1803F34A0 (-UpdateTouchpadDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartSwipe(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int updated; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), 1LL);
  *(_QWORD *)(a1 + 112) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                            (MultitaskingViewGestureHandler *)(a1 - 8),
                            a4);
  *(_QWORD *)(a1 + 100) = a5;
  updated = MultitaskingViewGestureHandler::UpdateTouchpadDimensions((MultitaskingViewGestureHandler *)(a1 - 8), a4);
  if ( updated < 0 )
  {
    v10 = 172LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  a5 = a2;
  *(_QWORD *)(a1 + 64) = __PAIR64__(a3, a2);
  LOBYTE(a5) = 0;
  updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
              (MultitaskingViewGestureHandler *)(a1 - 8),
              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5);
  if ( updated < 0 )
  {
    v10 = 176LL;
    goto LABEL_9;
  }
  if ( !MultitaskingViewGestureHandler::ShouldProcessGestureInput(
          (MultitaskingViewGestureHandler *)(a1 - 8),
          (const struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5) )
    return 0LL;
  updated = MultitaskingViewGestureHandler::ProcessGestureInput(a1 - 8, 1, (__int64)&a5, a4);
  if ( updated < 0 )
  {
    v10 = 179LL;
    goto LABEL_9;
  }
  return (unsigned int)updated;
}
