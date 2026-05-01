/*
 * XREFs of ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x18048521C
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180485C10 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180056960 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180485900 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeCoverWindow::InitializeInstance(TabletModeCoverWindow *this)
{
  char v2; // si
  IUnknown **v3; // rbx
  HRESULT Service; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  enum _TABLETMODESTATE *v8; // rdx
  TabletModeHelpers *v9; // rcx
  char IsTabletMode; // al
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = 1;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, (RTL_SRWLOCK *)this + 14);
  v3 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this, &v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Service = IUnknown_QueryService(
              *v3,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              (void **)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( Service < 0 )
  {
    v5 = (unsigned int)Service;
    v6 = 394LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)v5);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 88LL))(
         *((_QWORD *)this + 17),
         (char *)this + 204);
  Service = v7;
  if ( v7 < 0 )
  {
    v5 = (unsigned int)v7;
    v6 = 395LL;
    goto LABEL_5;
  }
  SetWindowPos(
    *((HWND *)this + 13),
    0LL,
    *((_DWORD *)this + 51),
    *((_DWORD *)this + 52),
    *((_DWORD *)this + 53) - *((_DWORD *)this + 51),
    *((_DWORD *)this + 54) - *((_DWORD *)this + 52),
    0x14u);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v9, v8);
  v11 = TabletModeCoverWindow::TabletModeChanged((TabletModeCoverWindow *)((char *)this + 80), IsTabletMode);
  Service = v11;
  if ( v11 >= 0 )
  {
    Service = 0;
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v11);
  }
LABEL_9:
  if ( v2 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, (RTL_SRWLOCK *)this + 14);
    *((_BYTE *)this + 200) = 0;
    ShowWindow(*((HWND *)this + 13), 0);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  }
  return (unsigned int)Service;
}
