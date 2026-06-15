/*
 * XREFs of ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140003220
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140002DA4 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006070 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD40 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_void____::_1_::dtor$2 @ 0x14002D608 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceMod_ea_14002D608.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140042460 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14004B150 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x140055A06 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--M.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140056389 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Media--.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140056582 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140056582.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$1 @ 0x14005F8AD (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryC_ea_14005F8AD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
