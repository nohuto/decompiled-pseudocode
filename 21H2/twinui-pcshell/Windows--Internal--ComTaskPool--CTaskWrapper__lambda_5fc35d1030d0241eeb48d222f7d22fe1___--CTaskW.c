/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1_____lambda_5fc35d1030d0241eeb48d222f7d22fe1___ @ 0x1800CDBB4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___ @ 0x1800CE0AC (Windows--Internal--ComTaskPool--QueueTask__lambda_5fc35d1030d0241eeb48d222f7d22fe1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1803B64DC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1_____lambda_5fc35d1030d0241eeb48d222f7d22fe1___(
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
  a1[4] = a2[2];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    a2 + 3);
  a1[5] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  *a1 = off_180504300;
  return a1;
}
