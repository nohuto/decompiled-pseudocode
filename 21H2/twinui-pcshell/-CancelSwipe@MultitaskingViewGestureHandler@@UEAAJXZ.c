/*
 * XREFs of ?CancelSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x1803F29F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CancelSwipe(MultitaskingViewGestureHandler *this)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), 4LL);
  *((_QWORD *)this + 8) = 0LL;
  return 0LL;
}
