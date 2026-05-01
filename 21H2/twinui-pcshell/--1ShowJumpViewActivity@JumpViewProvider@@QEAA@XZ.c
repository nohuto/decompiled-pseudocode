/*
 * XREFs of ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x180246060
 * Callers:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180245EB0 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024625C (--4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180247F30 (-OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     _CJumpViewExperienceManager::OnIdleStateChanged_::_1_::dtor$0 @ 0x180247FD6 (_CJumpViewExperienceManager--OnIdleStateChanged_--_1_--dtor$0.c)
 *     ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802480D0 (-OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CJumpViewExperienceManager::OnSetForegroundFailed_::_1_::dtor$0 @ 0x180248171 (_CJumpViewExperienceManager--OnSetForegroundFailed_--_1_--dtor$0.c)
 *     ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180248560 (-OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180248E30 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     _CJumpViewExperienceManager::Show_::_1_::dtor$3 @ 0x1802492CD (_CJumpViewExperienceManager--Show_--_1_--dtor$3.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180245E34 (--1-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VJu.c)
 *     ?Destroy@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180246AF8 (-Destroy@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?reset@?$shared_object@V?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180249CE4 (-reset@-$shared_object@V-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity(
        JumpViewProvider::ShowJumpViewActivity *this)
{
  *(_QWORD *)this = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<JumpViewProvider,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<JumpViewProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<JumpViewProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((JumpViewProvider::ShowJumpViewActivity *)((char *)this + 8));
}
