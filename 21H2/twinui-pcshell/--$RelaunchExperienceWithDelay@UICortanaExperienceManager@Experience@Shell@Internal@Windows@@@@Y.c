/*
 * XREFs of ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18039A618
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_64453e8f1d1795856607ef361707b1d3___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x18039C540 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18039C540.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800158B4 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7ccdeb5a17a531865bc32d547d16e7f0___ @ 0x1800CBA48 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_7ccdeb5a17a531865bc32d547d16e7f0___.c)
 *     ??1?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7878 (--1-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+18h] BYREF
  int v14; // [rsp+4Ch] [rbp+1Ch]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF

  v14 = HIDWORD(a2);
  v12 = 0LL;
  v15 = a1;
  v13 = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v12);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v12,
         (__int64)&GUID_3e90bc6d_f3d9_4e87_94ec_bb0819d7cdbf,
         &v15,
         &v13);
  if ( v2 < 0 )
  {
    v3 = (unsigned int)v2;
    v4 = 57LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v3);
    return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v12);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(v10, &v12);
  v10[1] = (__int64)StartWindowTelemetry::CortanaRecoveryDuringShutdown;
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7ccdeb5a17a531865bc32d547d16e7f0___(v6, v5, v7, v10);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>(v10);
  if ( v8 < 0 )
  {
    v3 = (unsigned int)v8;
    v4 = 79LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v12);
}
