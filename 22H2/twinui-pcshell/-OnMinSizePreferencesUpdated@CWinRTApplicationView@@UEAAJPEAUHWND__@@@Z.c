/*
 * XREFs of ?OnMinSizePreferencesUpdated@CWinRTApplicationView@@UEAAJPEAUHWND__@@@Z @ 0x1800368E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::OnMinSizePreferencesUpdated(CWinRTApplicationView *this, HWND a2)
{
  int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 312LL))(*((_QWORD *)this + 26));
  if ( !v4 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 6);
    *((_DWORD *)this + 58) = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
    *((_DWORD *)this + 59) = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
    if ( this == (CWinRTApplicationView *)-48LL )
      return 0LL;
    ReleaseSRWLockExclusive((PSRWLOCK)this + 6);
  }
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x190,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v4,
    v6);
  return (unsigned int)v4;
}
