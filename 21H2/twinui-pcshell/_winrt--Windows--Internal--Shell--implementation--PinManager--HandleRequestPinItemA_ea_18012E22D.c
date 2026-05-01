/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$11 @ 0x18012E22D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B310 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  HRESULT result; // eax

  *(_QWORD *)(a2 + 3472) = *(_QWORD *)(a2 + 3584) + 808LL;
  *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 3472);
  result = *(_DWORD *)(a2 + 48) & 1;
  if ( result )
  {
    *(_QWORD *)(a2 + 3480) = *(_QWORD *)(a2 + 3584) + 808LL;
    *(_QWORD *)(a2 + 3488) = *(_QWORD *)(a2 + 3584) + 808LL;
    *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 3488);
    *(_DWORD *)(a2 + 3496) = *(_DWORD *)(a2 + 48) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 3480) = *(_DWORD *)(a2 + 3496);
    *(_QWORD *)(a2 + 3504) = *(_QWORD *)(a2 + 3584) + 584LL;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(*(HSTRING **)(a2 + 3504));
  }
  return result;
}
