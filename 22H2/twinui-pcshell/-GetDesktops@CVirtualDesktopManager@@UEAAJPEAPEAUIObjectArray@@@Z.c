/*
 * XREFs of ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1804A99D0
 * Callers:
 *     ?GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z @ 0x180170F20 (-GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1804A9A60 (-GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetDesktops(CVirtualDesktopManager *this, struct IObjectArray **a2)
{
  int DesktopsInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), &SRWLock);
  DesktopsInternal = CVirtualDesktopManager::GetDesktopsInternal(this, a2);
  v5 = DesktopsInternal;
  if ( DesktopsInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)DesktopsInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
