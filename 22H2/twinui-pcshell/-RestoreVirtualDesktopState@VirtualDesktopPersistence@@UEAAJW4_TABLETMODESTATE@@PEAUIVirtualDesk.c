/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1804A4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18020AF84 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z @ 0x1804A4E4C (-ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBB18 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBB8C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        VirtualDesktopPersistence *a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r15
  __int64 v8; // r12
  char v9; // di
  __int64 (__fastcall *v10)(__int64 *, __int64 *); // rbx
  CCriticalFailureHandler *v11; // rcx
  int v12; // ebx
  LPVOID *v13; // rdx
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  const WCHAR *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rax
  CCriticalFailureHandler *v20; // rcx
  _QWORD *v21; // r15
  unsigned __int64 v22; // rdi
  __int64 v23; // r8
  unsigned __int64 v24; // r12
  _QWORD *v25; // r14
  __int64 (__fastcall *v26)(__int64 *, _QWORD *, struct IVirtualDesktop **); // rbx
  CCriticalFailureHandler *v27; // rcx
  const unsigned __int16 *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  WCHAR *v31; // r15
  struct IVirtualDesktop *v32; // rbx
  __int64 (__fastcall *v33)(struct IVirtualDesktop *, GUID *, __int64 *); // rdi
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // ebx
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, PVOID); // rdi
  HSTRING_HEADER *v39; // rax
  int v40; // eax
  __int64 (__fastcall *v41)(__int64 *, __int64, __int64, const WCHAR **); // rbx
  CCriticalFailureHandler *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  unsigned int v45; // edi
  void *v46; // rcx
  unsigned __int64 *v48; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v49; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v50; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v52; // [rsp+44h] [rbp-BCh] BYREF
  struct IVirtualDesktop *v53; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v54; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v55; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v58; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-78h]
  unsigned __int64 v62; // [rsp+90h] [rbp-70h]
  _OWORD *v63; // [rsp+98h] [rbp-68h]
  _OWORD *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  VirtualDesktopPersistence *v66; // [rsp+B0h] [rbp-50h]
  LPVOID pv; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int128 v70; // [rsp+D0h] [rbp-30h]
  HSTRING_HEADER v71; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v5 = a4;
  v69 = a4;
  v52 = a2;
  v66 = a1;
  v8 = a5;
  v60 = a5;
  v9 = 0;
  v57 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*a3 + 224);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
  v12 = v10(a3, &v57);
  v51 = v12;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v53) >= 0 )
  {
    switch ( (_DWORD)v53 )
    {
      case 2:
        v12 = -2023406815;
        goto LABEL_11;
      case 3:
        v12 = -2023406814;
        goto LABEL_11;
      case 4:
        v12 = -2147418094;
        goto LABEL_11;
      case 5:
        v12 = -2147022986;
LABEL_11:
        v51 = v12;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( v12 >= 0 )
    goto LABEL_19;
  if ( v12 != -2147024882 && v12 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v11,
      &v51,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0x57u,
      v48,
      v49);
    v12 = v51;
  }
  if ( v12 >= 0 )
  {
LABEL_19:
    v55 = 0LL;
    v58 = 0LL;
    v13 = &v58;
    v50 = (unsigned __int64 *)&v58;
    LODWORD(v48) = 3;
    LOBYTE(v13) = 1;
    if ( (*(int (__fastcall **)(_QWORD *, LPVOID *, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
           *((_QWORD **)a1 + 2),
           v13,
           0LL,
           L"VirtualDesktopIDs") >= 0 )
    {
      v14 = retaddr;
      if ( v61 )
      {
        v14 = retaddr;
        if ( (v61 & 0xF) == 0 )
        {
          v21 = v58;
          v63 = v58;
          v58 = 0LL;
          v64 = v63;
          v22 = v61 >> 4;
          v62 = v61 >> 4;
          v70 = *v63;
          v56 = 0LL;
          v50 = (unsigned __int64 *)&v56;
          LODWORD(v48) = 3;
          if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
                 *((_QWORD **)a1 + 2),
                 0LL,
                 0LL,
                 L"CurrentVirtualDesktop") >= 0 )
          {
            if ( v65 == 16 )
              v70 = *(_OWORD *)v56;
            else
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x6A,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)0x8000FFFFLL);
          }
          v24 = 0LL;
          if ( v22 )
          {
            v25 = v21;
            while ( 1 )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
                1u,
                v23);
              v53 = 0LL;
              v26 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IVirtualDesktop **))(*a3 + 160);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
              v12 = v26(a3, v25, &v53);
              v51 = v12;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v27, &v51);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                v12 = v51;
              }
              if ( v12 < 0 )
              {
                if ( v12 != -2147024882 && v12 != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v27,
                    &v51,
                    L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                    0x75u,
                    v48,
                    v50);
                  v12 = v51;
                }
                if ( v12 < 0 )
                  break;
              }
              v30 = *v25 - v70;
              if ( *v25 == (_QWORD)v70 )
                v30 = v25[1] - *((_QWORD *)&v70 + 1);
              if ( !v30 )
                Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v55, (__int64 *)&v53);
              if ( (int)VirtualDesktopPersistence::ReadPerDesktopData(v66, v53, v28, v29, &pv, &v68) >= 0 )
              {
                v31 = (WCHAR *)pv;
                v54 = 0LL;
                CoTaskMemFree(0LL);
                v54 = v31;
                v59 = 0LL;
                if ( (v68 & 1) == 0 && v68 )
                {
                  v32 = v53;
                  v33 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v53;
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
                  v34 = v33(v32, &GUID_4b27dbf1_5392_476b_ab37_f409943e0785, &v59);
                  v36 = v34;
                  if ( v34 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x85,
                      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      (const char *)(unsigned int)v34);
                  if ( v36 >= 0 )
                  {
                    v37 = v59;
                    v38 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v59 + 24LL);
                    v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, &v54, v35);
                    v40 = v38(v37, v39[1].Reserved.Reserved1);
                    if ( v40 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x87,
                        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                        (const char *)(unsigned int)v40);
                    v72 = 0LL;
                  }
                  v22 = v62;
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
                v54 = 0LL;
                CoTaskMemFree(v31);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
              ++v24;
              v25 += 2;
              if ( v24 >= v22 )
              {
                v21 = v63;
                goto LABEL_66;
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x75,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v12);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
            v21 = v63;
          }
          else
          {
LABEL_66:
            if ( v55 )
              goto LABEL_77;
            v41 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, const WCHAR **))(*a3 + 240);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
            v12 = v41(a3, v57, 5LL, &v55);
            v51 = v12;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v42, &v51);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v12 = v51;
            }
            if ( v12 >= 0 )
              goto LABEL_77;
            if ( v12 != -2147024882 && v12 != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v42,
                &v51,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                0x99u,
                v48,
                v50);
              v12 = v51;
            }
            if ( v12 >= 0 )
            {
LABEL_77:
              v9 = 1;
              v44 = v56;
              v56 = 0LL;
              CoTaskMemFree(v44);
              v64 = 0LL;
              CoTaskMemFree(v21);
              v5 = v69;
              v8 = v60;
LABEL_24:
              v17 = v55;
              v54 = v55;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v54);
              if ( v52 == 1 )
              {
                v18 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v60);
                Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v54, v18);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v60);
                v17 = v54;
              }
              v19 = *a3;
              if ( v9 )
              {
                v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, const WCHAR *))(v19 + 168))(a3, v57, v17);
                v51 = v12;
                if ( CRVPrivate::cfhImmersiveShellStartup )
                {
LABEL_83:
                  if ( v12 >= 0 )
                    goto LABEL_104;
                  v45 = 175;
LABEL_99:
                  if ( v12 != -2147024882 && v12 != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v20,
                      &v51,
                      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      v45,
                      v48,
                      v50);
                    v12 = v51;
                  }
                  if ( v12 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v45,
                      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      (const char *)(unsigned int)v12);
LABEL_105:
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
                    goto LABEL_106;
                  }
LABEL_104:
                  (*(void (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v8 + 40LL))(v8, v55);
                  v12 = 0;
                  goto LABEL_105;
                }
                if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v52) >= 0 )
                {
                  switch ( v52 )
                  {
                    case 2u:
                      v12 = -2023406815;
                      goto LABEL_81;
                    case 3u:
                      v12 = -2023406814;
                      goto LABEL_81;
                    case 4u:
                      v12 = -2147418094;
                      goto LABEL_81;
                    case 5u:
                      v12 = -2147022986;
LABEL_81:
                      v51 = v12;
                      break;
                  }
                }
                CRVPrivate::cfhImmersiveShellStartup = 1;
                goto LABEL_83;
              }
              v12 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *))(v19 + 176))(a3, v17);
              v51 = v12;
              if ( CRVPrivate::cfhImmersiveShellStartup )
              {
LABEL_97:
                if ( v12 >= 0 )
                  goto LABEL_104;
                v45 = 179;
                goto LABEL_99;
              }
              if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v52) >= 0 )
              {
                switch ( v52 )
                {
                  case 2u:
                    v12 = -2023406815;
                    goto LABEL_95;
                  case 3u:
                    v12 = -2023406814;
                    goto LABEL_95;
                  case 4u:
                    v12 = -2147418094;
                    goto LABEL_95;
                  case 5u:
                    v12 = -2147022986;
LABEL_95:
                    v51 = v12;
                    break;
                }
              }
              CRVPrivate::cfhImmersiveShellStartup = 1;
              goto LABEL_97;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x99,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v12);
          }
          v43 = v56;
          v56 = 0LL;
          CoTaskMemFree(v43);
          v64 = 0LL;
          CoTaskMemFree(v21);
LABEL_106:
          v46 = v58;
          v58 = 0LL;
          CoTaskMemFree(v46);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
          goto LABEL_107;
        }
        v15 = 2147549183LL;
        v16 = 97LL;
      }
      else
      {
        v15 = 2147943568LL;
        v16 = 96LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v14,
        (void *)v16,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v15);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v55, &v57);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
    (const char *)(unsigned int)v12);
LABEL_107:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
  return (unsigned int)v12;
}
