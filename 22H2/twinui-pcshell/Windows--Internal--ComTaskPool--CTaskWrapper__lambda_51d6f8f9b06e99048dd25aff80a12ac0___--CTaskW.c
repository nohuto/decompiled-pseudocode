/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0_____lambda_51d6f8f9b06e99048dd25aff80a12ac0___ @ 0x1800CDA68
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_51d6f8f9b06e99048dd25aff80a12ac0___ @ 0x1800CDF6C (Windows--Internal--ComTaskPool--QueueTask__lambda_51d6f8f9b06e99048dd25aff80a12ac0___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1803B620C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0_____lambda_51d6f8f9b06e99048dd25aff80a12ac0___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 56,
    a2 + 40);
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  *(_QWORD *)a1 = off_180504350;
  return a1;
}
