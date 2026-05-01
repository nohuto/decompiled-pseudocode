/*
 * XREFs of ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802480D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18008C230 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x180246060 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x180246840 (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x180247260 (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x18024796C (-JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180249524 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x18024984C (-TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::OnSetForegroundFailed(
        RTL_SRWLOCK *this,
        struct CSingleViewShellExperience *a2)
{
  CJumpViewExperienceManager *v3; // rdi
  _BYTE v5[320]; // [rsp+20h] [rbp-158h] BYREF

  v3 = (CJumpViewExperienceManager *)&this[-8];
  CJumpViewExperienceManager::FireCancelledEvent(this - 8);
  if ( *(_DWORD *)this[64].Ptr == 1 )
  {
    JumpViewProvider::ShowJumpViewActivity::TransferToCurrentThread(&this[58], v5);
    JumpViewProvider::ShowJumpViewActivity::JumpViewCancelledDueToForeground((JumpViewProvider::ShowJumpViewActivity *)v5);
    CJumpViewExperienceManager::DismissImpl(v3, 1);
    CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout(v3);
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v5);
  }
  return 0LL;
}
