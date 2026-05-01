/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f_____lambda_43e2ea7707e3cc3476f49dcfffc6812f___ @ 0x1800CD948
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___ @ 0x1800CE2C8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_43e2ea7707e3cc3476f49dcfffc6812f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1803B620C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f_____lambda_43e2ea7707e3cc3476f49dcfffc6812f___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 4,
    a2 + 2);
  a1[4] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  *a1 = off_180504378;
  return a1;
}
