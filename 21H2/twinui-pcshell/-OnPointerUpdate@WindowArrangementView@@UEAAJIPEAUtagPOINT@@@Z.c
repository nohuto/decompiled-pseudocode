/*
 * XREFs of ?OnPointerUpdate@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18047E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x180481058 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::OnPointerUpdate(WindowArrangementView *this, __int64 a2, struct tagPOINT *a3)
{
  __int64 v5; // rcx
  int updated; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LONG x; // [rsp+30h] [rbp+8h] BYREF
  LONG y; // [rsp+34h] [rbp+Ch]

  if ( *((_BYTE *)this + 282) )
    return 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, *a3, 0LL);
  x = a3->x;
  y = a3->y;
  updated = WindowArrangementView::UpdateView((char *)this - 32, &x, 0LL);
  v7 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)updated);
  return v7;
}
