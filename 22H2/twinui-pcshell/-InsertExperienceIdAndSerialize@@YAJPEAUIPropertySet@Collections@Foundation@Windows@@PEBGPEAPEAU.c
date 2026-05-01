/*
 * XREFs of ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180079634
 * Callers:
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1800794DC (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180067D20 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InsertExperienceIdAndSerialize(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        const unsigned __int16 *a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  HSTRING_HEADER *v11; // rbx
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+28h] [rbp-58h] BYREF
  const WCHAR *v18; // [rsp+30h] [rbp-50h] BYREF
  HSTRING_HEADER v19; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER v20; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18 = a2;
  *a3 = 0LL;
  v17 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  if ( a2
    && (v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, &v18, v6),
        v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)&off_180540FC0, v12),
        v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
                (HSTRING)v13[1].Reserved.Reserved1,
                v14,
                (__int64)v11[1].Reserved.Reserved1),
        v8 = v15,
        v15 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v15);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v7 = RoCreatePropertySetSerializer(&v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      v18 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v16 + 48LL))(
             v16,
             a1,
             a3);
      v8 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v8;
}
