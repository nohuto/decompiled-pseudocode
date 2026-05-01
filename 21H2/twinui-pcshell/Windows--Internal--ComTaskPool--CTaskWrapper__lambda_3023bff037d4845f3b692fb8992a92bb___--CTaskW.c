/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb_____lambda_3023bff037d4845f3b692fb8992a92bb___ @ 0x180249DE0
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18024BDBC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18024B290 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb_____lambda_3023bff037d4845f3b692fb8992a92bb___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v5;
    *v5 = 0LL;
  }
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 24);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  *(_QWORD *)a1 = off_180514688;
  return a1;
}
