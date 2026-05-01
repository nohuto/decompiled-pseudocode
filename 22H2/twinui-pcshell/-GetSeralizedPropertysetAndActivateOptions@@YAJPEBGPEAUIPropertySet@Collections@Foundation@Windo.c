/*
 * XREFs of ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1800794DC
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x180078DA4 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180079634 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall GetSeralizedPropertysetAndActivateOptions(
        const unsigned __int16 *a1,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        char a3,
        struct Windows::Storage::Streams::IBuffer **a4,
        _DWORD *a5)
{
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  int inserted; // eax
  int v15; // eax
  struct Windows::Storage::Streams::IBuffer *v17; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v19 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v18 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)&off_1804FF5A8, v9);
  v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
          (HSTRING)v10[1].Reserved.Reserved1,
          v11,
          a3 & 1);
  v13 = v12;
  v21 = 0LL;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v12);
  }
  else
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v17);
    inserted = InsertExperienceIdAndSerialize(a2, a1, &v17);
    v13 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)inserted);
    }
    else
    {
      v15 = 16777222;
      *a5 = 16777222;
      if ( (a3 & 4) != 0 )
      {
        v15 = 150994950;
        *a5 = 150994950;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v15 |= 0x10000000u;
        *a5 = v15;
      }
      if ( (a3 & 0x20) != 0 || (a3 & 1) == 0 )
      {
        v15 |= 0x40000000u;
        *a5 = v15;
      }
      if ( (a3 & 0x40) != 0 )
      {
        v15 |= 0x400000u;
        *a5 = v15;
      }
      if ( (a3 & 8) != 0 )
        *a5 = v15 & 0xFFFFFFFB;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      *a4 = v17;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return v13;
}
