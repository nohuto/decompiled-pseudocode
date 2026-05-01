/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180243AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001B6F0 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180052BA0 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1DC (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z @ 0x18009B268 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x180241BD4 (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x180241D24 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180242D18 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char v3; // si
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  CortanaFlightingHelpers *v9; // rcx
  unsigned int v10; // r8d
  int DpiForMonitor; // eax
  HSTRING_HEADER *v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64); // r8
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64); // r8
  unsigned int v17; // r8d
  bool v18; // zf
  char v19; // bl
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r8d
  HSTRING v23; // rbx
  HSTRING_HEADER *v24; // rax
  bool v26; // [rsp+48h] [rbp-69h] BYREF
  int v27; // [rsp+4Ch] [rbp-65h] BYREF
  int v28; // [rsp+50h] [rbp-61h] BYREF
  HSTRING v29; // [rsp+58h] [rbp-59h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-51h] BYREF
  HMONITOR hMonitor; // [rsp+70h] [rbp-41h] BYREF
  HWND hWnd; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v33[8]; // [rsp+80h] [rbp-31h] BYREF
  HWND *p_hWnd; // [rsp+88h] [rbp-29h]
  char v35; // [rsp+90h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-19h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-1h]
  struct tagMONITORINFO mi; // [rsp+B8h] [rbp+7h] BYREF
  HSTRING_HEADER v39; // [rsp+E0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hWnd = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 37), a2);
  EnableWindow(hWnd, 0);
  p_hWnd = &hWnd;
  v3 = 1;
  v35 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 40),
                         v4,
                         &v30,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v28,
                         &v26,
                         (struct tagRECT *)&hstringHeader,
                         &hMonitor);
  if ( MonitorInformation >= 0 )
  {
    v29 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v37,
           &v29);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x430,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      goto LABEL_27;
    }
    *(_QWORD *)&v30.left = v29;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30.left);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      MonitorInformation = -2147418113;
      v7 = 2147549183LL;
      v8 = 1080LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v7);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30.left);
      goto LABEL_26;
    }
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = *((_DWORD *)this + 153);
    *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetCortanaWidthWithoutGutter(&mi.rcMonitor, 1) + 48.0;
    v27 = 0;
    CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, &v27);
    if ( v27 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v9) )
    {
      DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v27, v33);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v8 = 1089LL;
LABEL_22:
        v7 = (unsigned int)DpiForMonitor;
        goto LABEL_23;
      }
      *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetDefaultCortanaWidthWithoutGutter(
                                                                  &mi.rcMonitor,
                                                                  v27,
                                                                  1)
                                                  + 48.0;
    }
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_180540BE8, v10);
    DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                      (HSTRING)v12[1].Reserved.Reserved1,
                      v13);
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_180540BF0, v14);
      DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                        (HSTRING)v15[1].Reserved.Reserved1,
                        v16);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor >= 0 )
      {
        if ( v26 )
          v18 = v28 == 0;
        else
          v18 = v28 == 2;
        v19 = !v18;
        v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_180540BF8, v17);
        DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                          (HSTRING)v20[1].Reserved.Reserved1,
                          v21,
                          v19);
        MonitorInformation = DpiForMonitor;
        if ( DpiForMonitor >= 0 )
        {
          v23 = v29;
          v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_180540C18, v22);
          DpiForMonitor = ExperienceManagerUtils::RaiseReactivatedEvent(
                            *((ExperienceManagerUtils **)this + 37),
                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this
                                                                                                 + 100),
                            *((HSTRING *)this + 35),
                            *((HSTRING *)this + 36),
                            (HSTRING)v24[1].Reserved.Reserved1,
                            v23);
          MonitorInformation = DpiForMonitor;
          if ( DpiForMonitor >= 0 )
          {
            *((_BYTE *)this + 616) = 1;
            v3 = 0;
            MonitorInformation = 0;
            goto LABEL_25;
          }
          v8 = 1128LL;
        }
        else
        {
          v8 = 1123LL;
        }
      }
      else
      {
        v8 = 1101LL;
      }
    }
    else
    {
      v8 = 1098LL;
    }
    goto LABEL_22;
  }
LABEL_27:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return (unsigned int)MonitorInformation;
}
