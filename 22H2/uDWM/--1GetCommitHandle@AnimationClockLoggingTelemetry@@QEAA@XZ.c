/*
 * XREFs of ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800B9F8C
 * Callers:
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800B9FB8 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002D4F8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::GetCommitHandle::~GetCommitHandle(
        AnimationClockLoggingTelemetry::GetCommitHandle *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::GetCommitHandle::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
