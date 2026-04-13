/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_b59dbdfd0007f2d89c20db91cc7697cd___ @ 0x18006F684
 * Callers:
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_b59dbdfd0007f2d89c20db91cc7697cd___ @ 0x18006E3E0 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A4D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A54C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18006B39C (--0-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflect.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CFCC8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_b59dbdfd0007f2d89c20db91cc7697cd___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rcx

  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(a2 + 8);
  *v4 = 0LL;
  if ( v4 != (_QWORD *)(a2 + 8) )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a2 + 24) = 1;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a2 + 40) = 1;
  v6 = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 56) = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v6 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 64));
  v7 = a1 + 112;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 112,
    a2 + 104);
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 352);
  *(_QWORD *)(a2 + 352) = 0LL;
  v8 = *(_QWORD *)(a1 + 360);
  if ( v8 )
    v7 = v8 + 8;
  *(_QWORD *)(a1 + 104) = v7;
  *(_QWORD *)(a1 + 96) = v7 + 40;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  if ( *(_DWORD *)(a2 + 80) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 56));
  *(_QWORD *)(a1 + 56) = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  v9 = (__int64 *)(a1 + 368);
  v10 = (__int64 *)(a2 + 360);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  if ( (__int64 *)(a1 + 368) != v10 )
  {
    *(_QWORD *)(a1 + 376) = v10[1];
    v10[1] = 0LL;
    v11 = *v9;
    *v9 = *v10;
    *v10 = v11;
  }
  *(_QWORD *)a1 = off_1800EA978;
  *(_DWORD *)(a1 + 384) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 392),
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *(_DWORD *)(a1 + 384) = 0;
  return a1;
}
