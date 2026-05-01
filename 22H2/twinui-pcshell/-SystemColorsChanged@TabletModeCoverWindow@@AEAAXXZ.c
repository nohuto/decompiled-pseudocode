/*
 * XREFs of ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180485868
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180485C10 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1804848F0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1804859C8 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeCoverWindow::SystemColorsChanged(TabletModeCoverWindow *this)
{
  int DesktopThumbnail; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( IsPPIEdition() )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v4, (RTL_SRWLOCK *)this + 14);
    if ( *((_BYTE *)this + 200) )
    {
      DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail(this);
      if ( DesktopThumbnail < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1CE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)DesktopThumbnail);
        *((_BYTE *)this + 200) = 0;
        ShowWindow(*((HWND *)this + 13), 0);
      }
      TabletModeCoverWindow::UpdateWindowOrder(this);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v4);
  }
}
