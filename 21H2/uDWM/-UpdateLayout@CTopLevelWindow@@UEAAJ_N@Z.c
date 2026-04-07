/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180016FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180017020 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this, bool a2)
{
  int updated; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 33) + 96LL))(
              *((_QWORD *)this + 33),
              (char *)this + 120);
  if ( updated < 0 )
  {
    v6 = 4390LL;
  }
  else
  {
    updated = CVisual::UpdateLayout(this, a2);
    if ( updated >= 0 )
      return 0LL;
    v6 = 4392LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
