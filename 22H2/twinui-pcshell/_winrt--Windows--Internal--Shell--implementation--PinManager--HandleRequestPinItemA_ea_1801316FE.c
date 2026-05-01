/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$8 @ 0x1801316FE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1338 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 3464) = *(_QWORD *)(a2 + 3584) + 552LL;
  return winrt::com_ptr<IStream>::~com_ptr<IStream>(*(_QWORD **)(a2 + 3464));
}
