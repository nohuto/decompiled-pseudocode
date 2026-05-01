/*
 * XREFs of ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BD9D8
 * Callers:
 *     ?OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformation@567@@Z @ 0x1804BE540 (-OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Device.c)
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x1804BE660 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802D82E4 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1804BCD24 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Win.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHSTRING__@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHSTRING__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1804BD3B0 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHSTRING__@@@2@V-$tuple@$$V@2@@-$_.c)
 *     ?IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windows@@PEA_N@Z @ 0x1804BE130 (-IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windo.c)
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x1804BF868 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::AddDevice(
        TwinUI::Lighting::AssistantLightManager *this,
        HSTRING a2)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  DWORD v7; // edx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  int IsCortanaDevice; // eax
  TwinUI::Lighting::AssistantLightManager *v12; // rcx
  __int64 v13; // rdx
  struct Windows::Devices::Lights::ILampArray *v14; // rcx
  int AssistantLight; // eax
  __int64 v16; // r9
  __int64 *v17; // r10
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int128 v21; // kr10_16
  std::_Ref_count_base *v22; // rcx
  struct Windows::Devices::Lights::ILampArray *v23; // rcx
  __int64 v24; // rcx
  struct Windows::Devices::Lights::ILampArray *v25; // rcx
  __int64 v26; // rcx
  __int64 result; // rax
  bool v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  struct Windows::Devices::Lights::ILampArray *v30; // [rsp+40h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-60h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-58h] BYREF
  HSTRING v33; // [rsp+58h] [rbp-50h] BYREF
  __int64 v34; // [rsp+60h] [rbp-48h] BYREF
  __int64 v35; // [rsp+68h] [rbp-40h] BYREF
  HSTRING_HEADER v36; // [rsp+70h] [rbp-38h] BYREF
  __int64 v37; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v33 = a2;
  v34 = 0LL;
  v37 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"Windows.Devices.Lights.LampArray", 0x21u, 0x20u);
  v3 = v37;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_64652a6a_1d85_45b9_84f0_b7a1316ac766, &v34);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_49;
  }
  v29 = 0LL;
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, v33, v5, &v29);
  v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray *> *>(
         v29,
         v7,
         v8);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_5:
    v10 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_49;
  }
  v30 = 0LL;
  IsCortanaDevice = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Lights::ILampArray **))(*(_QWORD *)v29 + 64LL))(
                      v29,
                      &v30);
  v6 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    v13 = 187LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)IsCortanaDevice);
LABEL_10:
    v14 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_5;
  }
  v28 = 0;
  IsCortanaDevice = TwinUI::Lighting::AssistantLightManager::IsCortanaDevice(v12, v30, &v28);
  v6 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    v13 = 190LL;
    goto LABEL_9;
  }
  if ( v28 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    *(_OWORD *)&v36.Reserved.Reserved1 = 0LL;
    lpCriticalSection = (LPCRITICAL_SECTION)v30;
    if ( v30 )
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v30 + 8LL))(v30);
    AssistantLight = TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(&lpCriticalSection, &v36);
    v6 = AssistantLight;
    if ( AssistantLight < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)AssistantLight);
      if ( *(_QWORD *)&v36.Reserved.Reserved2[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v36.Reserved.Reserved2[8]);
      goto LABEL_10;
    }
    wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
      (__int64 **)this + 5,
      (__int64 **)&SystemTimeAsFileTime,
      (unsigned __int64 *)&v33);
    v18 = *v17;
    if ( SystemTimeAsFileTime == *v17 )
    {
      v19 = (__int64 *)*v17;
      v20 = *(_QWORD *)(v18 + 8);
      if ( *(_BYTE *)(v20 + 25) )
        goto LABEL_50;
      do
      {
        if ( *(_QWORD *)(v20 + 32) >= (unsigned __int64)v33 )
        {
          v19 = (__int64 *)v20;
          v20 = *(_QWORD *)v20;
        }
        else
        {
          v20 = *(_QWORD *)(v20 + 16);
        }
      }
      while ( !*(_BYTE *)(v20 + 25) );
      if ( v19 == (__int64 *)v18 || (unsigned __int64)v33 < v19[4] )
      {
LABEL_50:
        try
        {
          SystemTimeAsFileTime = (struct _FILETIME)&v33;
          v19 = (__int64 *)*std::_Tree<std::_Tmap_traits<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>,std::less<HSTRING__ *>,std::allocator<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<HSTRING__ * const &>,std::tuple<>>(
                              v17,
                              &v35,
                              v19,
                              v16,
                              &SystemTimeAsFileTime);
        }
        catch ( std::exception )
        {
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          if ( *(_QWORD *)&v36.Reserved.Reserved2[8] )
            std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v36.Reserved.Reserved2[8]);
          v23 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v23 + 16LL))(v23);
          }
          v24 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v6 = -2147024882;
LABEL_49:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
          result = v6;
        }
      }
      v21 = *(_OWORD *)&v36.Reserved.Reserved1;
      *(_OWORD *)&v36.Reserved.Reserved1 = 0LL;
      v19[5] = v21;
      v22 = (std::_Ref_count_base *)v19[6];
      v19[6] = *((_QWORD *)&v21 + 1);
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( *(_QWORD *)&v36.Reserved.Reserved2[8] )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v36.Reserved.Reserved2[8]);
  }
  v25 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v6 = 0;
  goto LABEL_49;
}
