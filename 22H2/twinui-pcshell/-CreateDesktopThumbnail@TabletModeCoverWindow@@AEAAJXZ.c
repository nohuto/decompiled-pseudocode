/*
 * XREFs of ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1804848F0
 * Callers:
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180484C10 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180485868 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180485900 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FCEEC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1803FCF70 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x180419D0C (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeCoverWindow::CreateDesktopThumbnail(TabletModeCoverWindow *this)
{
  char v2; // r14
  LPVOID *ppv; // rdi
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  DCompThumbnailHelpers **v7; // r15
  __int64 v8; // rax
  LPVOID v9; // rbx
  _QWORD *v10; // r12
  int DesktopBackgroundThumbnail; // eax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  DCompThumbnailHelpers *v15; // rdi
  __int64 v16; // rbx
  DWORD SysColor; // eax
  __int64 v18; // rdx
  __int64 v20[2]; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+50h] [rbp-30h]
  __int64 v22[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v23[4]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v20[1] = (__int64)this;
  v2 = 1;
  v21 = 1;
  ppv = (LPVOID *)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
    Instance = CoCreateInstance(
                 &CLSID_SwitchThumbnailDeviceManager,
                 0LL,
                 1u,
                 &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                 ppv);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 300LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)*ppv + 176LL))(*ppv);
  }
  v7 = (DCompThumbnailHelpers **)((char *)this + 160);
  v8 = *((_QWORD *)this + 20);
  if ( !v8 )
  {
    v9 = *ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, char *))(*(_QWORD *)v9 + 56LL))(
                 v9,
                 *((_QWORD *)this + 13),
                 1LL,
                 (char *)this + 160);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 308LL;
      goto LABEL_8;
    }
    v8 = *((_QWORD *)this + 20);
  }
  v20[0] = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v22, v20, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
  v10 = (_QWORD *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                 *v7,
                                 0LL,
                                 (TabletModeCoverWindow *)((char *)this + 204),
                                 0LL,
                                 (const struct tagSIZE *)this + 15);
  v5 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail >= 0 )
  {
    v13 = *((_DWORD *)this + 54) - *((_DWORD *)this + 52);
    v14 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = v14;
    v23[3] = v13;
    DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(**((_QWORD **)this + 15)
                                                                                             + 24LL))(
                                   *((_QWORD *)this + 15),
                                   v23,
                                   0LL,
                                   0LL);
    v5 = DesktopBackgroundThumbnail;
    if ( DesktopBackgroundThumbnail >= 0 )
    {
      v20[0] = 0x100000001LL;
      v15 = *v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
      v16 = *(_QWORD *)v15;
      SysColor = GetSysColor(8);
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, char *))(v16 + 104))(
                                     v15,
                                     0LL,
                                     SysColor,
                                     v20[0],
                                     &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                     (char *)this + 128);
      v5 = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail >= 0 )
      {
        IsPPIEdition();
        DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v10 + 32LL))(
                                       *v10,
                                       v18,
                                       0LL,
                                       0LL);
        v5 = DesktopBackgroundThumbnail;
        if ( DesktopBackgroundThumbnail >= 0 )
        {
          DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(
                                         *v10,
                                         v23,
                                         0LL,
                                         0LL);
          v5 = DesktopBackgroundThumbnail;
          if ( DesktopBackgroundThumbnail >= 0 )
          {
            v2 = 0;
            v21 = 0;
            v5 = 0;
            goto LABEL_22;
          }
          v12 = 326LL;
        }
        else
        {
          v12 = 325LL;
        }
      }
      else
      {
        v12 = 323LL;
      }
    }
    else
    {
      v12 = 319LL;
    }
  }
  else
  {
    v12 = 317LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)DesktopBackgroundThumbnail);
LABEL_22:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v22);
LABEL_23:
  if ( v2 )
  {
    v21 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  }
  return v5;
}
