/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BAFB4
 * Callers:
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator() @ 0x1800CF4A0 (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--operator().c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803BB260 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C7290 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??B_Atomic_bool@std@@QEBA_NXZ @ 0x18028ECF8 (--B_Atomic_bool@std@@QEBA_NXZ.c)
 *     ??$call@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@Z @ 0x1803B4D20 (--$call@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@-$factory_cache_entry@UKnownOnScreenInpu.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1803B7FA8 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1803BAC90 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1803BAE98 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1803BB540 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  __int64 v4; // rcx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v6; // rax
  int v7; // edx
  __int64 v8; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v9; // rdx
  HWND v10; // rax
  int AppFrameWrapper; // eax
  HSTRING v13; // rbx
  int TitleBar; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct IApplicationFrameTitleBar *v18; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF
  struct IApplicationFrameTitleBar *v21; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationFrameTitleBar *v22; // [rsp+78h] [rbp+48h] BYREF

  KBViewInfo::InitializeIds(a2);
  winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<_lambda_1ffd59018855fb89b3c56dc6f41cf375_ &>(
    v4,
    (__int64)&string);
  StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 14), 0LL);
  LOBYTE(StringRawBuffer) = CompareStringOrdinal(v6, -1, StringRawBuffer, -1, 1) == 2;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
  if ( (_BYTE)StringRawBuffer )
  {
    v7 = *((_DWORD *)a2 + 26);
    *((_DWORD *)this + 179) = v7;
    v8 = *((_QWORD *)this + 86);
    *(_DWORD *)(v8 + 488) = v7;
    *(_DWORD *)(*(_QWORD *)(v8 + 104) + 612LL) = v7;
  }
  if ( !*((_BYTE *)a2 + 33)
    && !std::_Atomic_bool::operator bool((_BYTE *)a2 + 32)
    && Microsoft::WRL::operator!=<IApplicationViewCollection>((_QWORD *)a2 + 14) )
  {
    if ( !KBViewInfo::IsAppDefaultView(a2) )
    {
      v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v9);
      if ( v10 && !SetPropW(v10, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAFE,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)0x80004005LL);
        return 2147500037LL;
      }
      string = 0LL;
      v22 = 0LL;
      AppFrameWrapper = TouchKeyboardExperienceManager::CreateAppFrameWrapper(
                          this,
                          (struct IApplicationFrameWrapper **)&string);
      if ( AppFrameWrapper < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2819LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)AppFrameWrapper);
        __debugbreak();
      }
      v13 = string;
      TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
                   retaddr,
                   (struct IApplicationFrameWrapper *)string,
                   &v22);
      if ( TitleBar < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2820LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)TitleBar);
        __debugbreak();
      }
      v15 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)v13 + 48LL))(v13, 3LL);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2823LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v16 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, *(_QWORD *)a2);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2824LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 568LL))(*(_QWORD *)a2, 1LL);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2827LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v18 = v22;
      if ( *((struct IApplicationFrameTitleBar **)a2 + 2) != v22 )
      {
        v21 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
        v21 = (struct IApplicationFrameTitleBar *)*((_QWORD *)a2 + 2);
        *((_QWORD *)a2 + 2) = v18;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      }
      Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)a2 + 1, (__int64 *)&string);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
    }
    *((_BYTE *)a2 + 33) = 1;
  }
  return 0LL;
}
