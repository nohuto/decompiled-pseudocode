/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E409C
 * Callers:
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x180172482 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x1801724E2 (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame____::_1_::dtor$2 @ 0x180172506 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_180172506.c)
 *     _CApplicationFrameService::OnChromeOffsetsChanged_::_1_::dtor$0 @ 0x180174890 (_CApplicationFrameService--OnChromeOffsetsChanged_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame___Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&_unsigned_long_const_&__::_1_::dtor$2 @ 0x1801E3A90 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_1801E3A90.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x1801E48F1 (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x1801E4DEF (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x1801E4F41 (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
