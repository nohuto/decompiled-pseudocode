/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1804E4744
 * Callers:
 *     ?AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E39A8 (-AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E3A64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1804E4954 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E58A4 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_ceaa45fa1f6e5359ba66c6dfc1b41016___ @ 0x18014E9F8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014E9F8.c)
 *     _lambda_f55151fab6cde82124031f7726ac4810_::__lambda_f55151fab6cde82124031f7726ac4810_ @ 0x18014EE00 (_lambda_f55151fab6cde82124031f7726ac4810_--__lambda_f55151fab6cde82124031f7726ac4810_.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v6; // di
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // r14d
  __int64 v12; // rdi
  __int64 *v13; // rax
  int v14; // edi
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+48h] [rbp-21h] BYREF
  __int64 v19[2]; // [rsp+50h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v6 = 0;
  LODWORD(v17) = 0;
  a3->value = 0LL;
  v7 = *((_QWORD *)this + 12);
  v18 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_DWORD *)this + 33);
  if ( (v8 & 2) != 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShellExperience", 0x10u, 0xFu);
    v6 = 1;
    v9 = v21;
    v10 = v21;
    v8 = *((_DWORD *)this + 33);
  }
  else
  {
    v10 = 0LL;
    v9 = v21;
  }
  if ( (v6 & 1) != 0 )
    v9 = 0LL;
  v21 = v9;
  v11 = (v8 >> 3) & 1;
  if ( (v8 & 0x10) != 0 )
    goto LABEL_15;
  v12 = *((_QWORD *)this + 13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v19, &v18);
  v19[1] = (__int64)this;
  v13 = Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_ceaa45fa1f6e5359ba66c6dfc1b41016___(
          &v17,
          (__int64)v19);
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _QWORD, int, __int64, struct EventRegistrationToken *))(*(_QWORD *)v12 + 48LL))(
          v12,
          a2,
          v10,
          *((_QWORD *)this + 2),
          v11,
          *v13,
          a3);
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  lambda_f55151fab6cde82124031f7726ac4810_::__lambda_f55151fab6cde82124031f7726ac4810_((Microsoft::WRL::WeakRef *)v19);
  if ( v14 == -2147483629 )
    v14 = 0;
  if ( v14 >= 0 )
LABEL_15:
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v14);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v14;
}
