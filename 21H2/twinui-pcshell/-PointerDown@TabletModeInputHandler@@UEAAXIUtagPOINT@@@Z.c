/*
 * XREFs of ?PointerDown@TabletModeInputHandler@@UEAAXIUtagPOINT@@@Z @ 0x180483F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabletModeInputHandler::PointerDown(TabletModeInputHandler *this, __int64 a2, struct tagPOINT a3)
{
  struct tagPOINT v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  (*(void (__fastcall **)(_QWORD, __int64, struct tagPOINT *))(**((_QWORD **)this + 4) + 24LL))(
    *((_QWORD *)this + 4),
    a2,
    &v3);
}
