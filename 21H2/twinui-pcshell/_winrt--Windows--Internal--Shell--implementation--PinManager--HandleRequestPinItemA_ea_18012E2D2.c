/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$12 @ 0x18012E2D2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B310 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  HRESULT result; // eax

  *(_QWORD *)(a2 + 3512) = *(_QWORD *)(a2 + 3584) + 808LL;
  *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 3512);
  result = *(_DWORD *)(a2 + 48) & 2;
  if ( result )
  {
    *(_QWORD *)(a2 + 3520) = *(_QWORD *)(a2 + 3584) + 808LL;
    *(_QWORD *)(a2 + 3528) = *(_QWORD *)(a2 + 3584) + 808LL;
    *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 3528);
    *(_DWORD *)(a2 + 3536) = *(_DWORD *)(a2 + 48) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 3520) = *(_DWORD *)(a2 + 3536);
    *(_QWORD *)(a2 + 3544) = *(_QWORD *)(a2 + 3584) + 592LL;
    return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(*(HSTRING **)(a2 + 3544));
  }
  return result;
}
