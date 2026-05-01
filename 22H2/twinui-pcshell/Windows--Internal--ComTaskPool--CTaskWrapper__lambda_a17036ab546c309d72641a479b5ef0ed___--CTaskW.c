/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed_____lambda_a17036ab546c309d72641a479b5ef0ed___ @ 0x180249CE0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___ @ 0x18024AD9C (Windows--Internal--ComTaskPool--QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18024B0E0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed_____lambda_a17036ab546c309d72641a479b5ef0ed___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (_QWORD *)(a1 + 24) != a2 + 1 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  *(_QWORD *)a1 = off_180514648;
  return a1;
}
