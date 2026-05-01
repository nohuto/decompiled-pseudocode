/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180085BAC
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001503C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C6360 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180231E6C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x180243CE0 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800151C0 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180015CF0 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180016798 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AAB0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18001AAB0.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18001B940 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18001B940.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x18005310C (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180053148 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180085E14 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800910C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091130 (_Init_thread_header.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___ @ 0x18014E970 (Windows--Internal--ComTaskPool--QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___.c)
 *     _lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_ @ 0x18014EC54 (_lambda_65bd7f122925cc900a11f0d0a2dc2897_--__lambda_65bd7f122925cc900a11f0d0a2dc2897_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  void *v4; // r14
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  HSTRING v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  HSTRING v16; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING string; // [rsp+30h] [rbp-D8h] BYREF
  int v18; // [rsp+38h] [rbp-D0h]
  _QWORD v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v20[16]; // [rsp+58h] [rbp-B0h] BYREF
  void **v21; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v2 = 4LL;
  if ( dword_1806522E0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1806522E0);
    if ( dword_1806522E0 == -1 )
    {
      dword_1806522E4 = SHTaskPoolGetUniqueContext();
      Init_thread_footer(&dword_1806522E0);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(
                   v3,
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v22,
    (__int64)"Launch");
  v22[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
  SingleViewExperienceTelemetry::Launch::StartActivity(
    (SingleViewExperienceTelemetry::Launch *)v22,
    v6,
    StringRawBuffer,
    v4);
  v16 = *(HSTRING *)this;
  string = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(&string, &v16);
  v10 = v7;
  v18 = v7;
  if ( v7 >= 0 )
  {
    CSingleViewShellExperience::BoostPriority((__int64)this, 0LL, v8, v9);
    v11 = (HSTRING)*((_QWORD *)this + 12);
    v16 = v11;
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v19, &v16);
    v19[1] = this;
    ExperienceManagerUtils::CopyableHString::CopyableHString(
      (ExperienceManagerUtils::CopyableHString *)v20,
      (const struct ExperienceManagerUtils::CopyableHString *)&string);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v21,
      (__int64)v22);
    v21 = &SingleViewExperienceTelemetry::Launch::`vftable';
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___(v13, v12, v14, v19, v16);
    lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_((Microsoft::WRL::WeakRef *)v19);
    if ( v10 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v22);
  return (unsigned int)v10;
}
