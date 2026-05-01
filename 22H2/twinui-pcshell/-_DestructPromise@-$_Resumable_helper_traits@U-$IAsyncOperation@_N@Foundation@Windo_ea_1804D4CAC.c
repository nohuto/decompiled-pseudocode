/*
 * XREFs of ?_DestructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@SAXPEAX@Z @ 0x1804D4CAC
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800DCF35 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800DCF35.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800DCF80 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800DCF80.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800DFAF9 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800DFAF9.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$2 @ 0x1800DFB40 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800DFB40.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800E0721 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800E0721.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$2 @ 0x1800E0760 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E0760.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$1_::_1_::dtor$1 @ 0x1800E1352 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800E1352.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1390 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1390.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::_DestructPromise(
        __int64 a1)
{
  return std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type::`scalar deleting destructor'(
           (__int64 *)(a1 - 96),
           0);
}
