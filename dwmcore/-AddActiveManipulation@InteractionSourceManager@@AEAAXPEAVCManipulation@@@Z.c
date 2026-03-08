/*
 * XREFs of ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x180270BA4
 * Callers:
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180271824 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x18020B03C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ??$emplace_front@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802707FC (--$emplace_front@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$deque@V-$com_.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180270A38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 */

void __fastcall InteractionSourceManager::AddActiveManipulation(
        InteractionSourceManager *this,
        struct CManipulation *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CManipulation::SetCaptureState_RenderThread(a2);
  wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
    &v4,
    (__int64)a2);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
    (__int64)this + 80,
    &v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
}
