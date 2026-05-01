/*
 * XREFs of ?GetCoverWindow@TabletModeCoverWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180484E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TabletModeCoverWindow::GetCoverWindow(RTL_SRWLOCK *this, HWND *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  *a2 = (HWND)this[4].Ptr;
  if ( this[4].Ptr )
  {
    v5 = 0;
  }
  else
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)0x80004005LL);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
