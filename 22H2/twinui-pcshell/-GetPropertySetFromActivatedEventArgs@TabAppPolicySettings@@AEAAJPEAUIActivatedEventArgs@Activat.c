/*
 * XREFs of ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x1802F33EC
 * Callers:
 *     ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x1802F3270 (-GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@.c)
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1802F3640 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1802F37C0 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18002B130 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(
        TabAppPolicySettings *this,
        __int64 (__fastcall ***a2)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  HSTRING_HEADER *v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // r8
  int v20; // eax
  char v21; // cl
  struct Windows::Foundation::Collections::IPropertySet *v22; // rax
  _BYTE v24[8]; // [rsp+30h] [rbp-29h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+38h] [rbp-21h] BYREF
  __int64 v26; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+48h] [rbp-11h] BYREF
  __int64 v28; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER v29; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  if ( a2 )
  {
    v6 = *a2;
    v27 = 0LL;
    v7 = (*v6)(
           (struct Windows::ApplicationModel::Activation::IActivatedEventArgs *)a2,
           &GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51,
           &v27);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 209LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)v7);
LABEL_20:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      return v5;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 64LL))(v27, &v28);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 212LL;
      goto LABEL_7;
    }
    v26 = 0LL;
    v9 = (__int64 *)*((_QWORD *)this + 8);
    v10 = *v9;
    v26 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v10 + 24))(
            v9,
            &SID_ViewEventDispatcher,
            &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a,
            &v26);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)v11);
LABEL_19:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
      goto LABEL_20;
    }
    v25 = 0LL;
    v12 = v26;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v26 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v14 = v13(v12, v28, &v25);
    v5 = v14;
    if ( v14 >= 0 )
    {
      v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180540EB0, v15);
      v20 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v25,
              (__int64)v18[1].Reserved.Reserved1,
              v19,
              v24);
      v21 = v24[0];
      if ( v20 < 0 )
        v21 = 0;
      if ( !v21 )
      {
        v22 = v25;
        v25 = 0LL;
        *a3 = v22;
        v5 = 0;
        goto LABEL_18;
      }
      v5 = -2147019873;
      v16 = 2147947423LL;
      v17 = 223LL;
    }
    else
    {
      v16 = (unsigned int)v14;
      v17 = 219LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)v16);
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    goto LABEL_19;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
    (const char *)0x80070057LL);
  return v5;
}
