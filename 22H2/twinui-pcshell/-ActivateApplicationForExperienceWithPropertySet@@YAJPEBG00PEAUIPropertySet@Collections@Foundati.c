/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180077F9C
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18008B2DC (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _lambda_172a7185b1276b4a19f8c519689fb59f_::operator() @ 0x18009C2F0 (_lambda_172a7185b1276b4a19f8c519689fb59f_--operator().c)
 *     _lambda_6e6fea714a04690c65ea3b6c1455a89e_::operator() @ 0x1800B15C0 (_lambda_6e6fea714a04690c65ea3b6c1455a89e_--operator().c)
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FA0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     _lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator() @ 0x1800CF82C (_lambda_d35354d926b4f7c0d2efe226c9ec2890_--operator().c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18025B8E0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb12221cab58c029e8bb5bdcb2677923___::Run @ 0x1803DFE70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bb12221cab58c029e8bb5bdcb2677923___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x180036B2C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_999dc00085dcb4e97168c8687495f75d_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_999dc00085dcb4e97168c8687495f75d_@@@Z @ 0x180078B38 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x180078DA4 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  int v9; // eax
  unsigned int v10; // r8d
  unsigned __int16 *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int64 v18; // [rsp+20h] [rbp-79h] BYREF
  unsigned __int16 *v19; // [rsp+28h] [rbp-71h] BYREF
  __int64 v20; // [rsp+30h] [rbp-69h]
  __int64 v21; // [rsp+38h] [rbp-61h]
  PVOID *v22; // [rsp+40h] [rbp-59h] BYREF
  PVOID *p_Reserved1; // [rsp+48h] [rbp-51h]
  __int64 v24; // [rsp+50h] [rbp-49h]
  __int64 v25; // [rsp+58h] [rbp-41h]
  const WCHAR *v26; // [rsp+60h] [rbp-39h] BYREF
  PVOID v27; // [rsp+68h] [rbp-31h] BYREF
  PVOID Reserved1; // [rsp+70h] [rbp-29h] BYREF
  HSTRING_HEADER v29; // [rsp+78h] [rbp-21h] BYREF
  __int64 v30; // [rsp+90h] [rbp-9h]
  HSTRING_HEADER v31; // [rsp+98h] [rbp-1h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v22 = (PVOID *)a2;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
  v20 = -1LL;
  v21 = -1LL;
  v9 = ParseAppUserModelId(a1, 0LL, &v19);
  v11 = (unsigned __int16 *)a1;
  if ( v9 >= 0 )
    v11 = v19;
  v26 = v11;
  v18 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &v26, v10)[1].Reserved.Reserved1;
  v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)&v22, v12)[1].Reserved.Reserved1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v22 = &v27;
  p_Reserved1 = &Reserved1;
  v15 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_999dc00085dcb4e97168c8687495f75d_>(
          v14,
          v13,
          &v18,
          &v22);
  v16 = v15;
  v30 = 0LL;
  v32 = 0LL;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v15);
  }
  else
  {
    v22 = (PVOID *)a1;
    p_Reserved1 = (PVOID *)L"Windows.Launch";
    v24 = v18;
    v25 = a6;
    v16 = ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_(a3, a4, a5, &v22);
    if ( v16 >= 0 )
      v16 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
  return (unsigned int)v16;
}
