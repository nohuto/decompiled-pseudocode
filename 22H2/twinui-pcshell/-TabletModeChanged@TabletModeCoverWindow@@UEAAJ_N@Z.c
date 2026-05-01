/*
 * XREFs of ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180485900
 * Callers:
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x18048521C (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1804848F0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1804859C8 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeCoverWindow::TabletModeChanged(TabletModeCoverWindow *this, char a2)
{
  int DesktopThumbnail; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, (RTL_SRWLOCK *)this + 4);
  *((_BYTE *)this + 120) = a2;
  if ( a2 )
  {
    DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)((char *)this - 80));
    if ( DesktopThumbnail < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)DesktopThumbnail);
      *((_BYTE *)this + 120) = 0;
      ShowWindow(*((HWND *)this + 3), 0);
    }
    TabletModeCoverWindow::UpdateWindowOrder((TabletModeCoverWindow *)((char *)this - 80));
  }
  else
  {
    ShowWindow(*((HWND *)this + 3), 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  return 0LL;
}
