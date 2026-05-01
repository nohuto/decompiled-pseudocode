/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E3EEC
 * Callers:
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x1801722D2 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x180172332 (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame____::_1_::dtor$2 @ 0x180172356 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_180172356.c)
 *     _CApplicationFrameService::OnChromeOffsetsChanged_::_1_::dtor$0 @ 0x1801746E0 (_CApplicationFrameService--OnChromeOffsetsChanged_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame___Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&_unsigned_long_const_&__::_1_::dtor$2 @ 0x1801E38E0 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_1801E38E0.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x1801E4741 (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x1801E4C3F (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x1801E4D91 (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
