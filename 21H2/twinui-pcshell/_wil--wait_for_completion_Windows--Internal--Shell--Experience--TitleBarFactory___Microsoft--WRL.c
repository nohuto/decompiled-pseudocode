/*
 * XREFs of _wil::wait_for_completion_Windows::Internal::Shell::Experience::TitleBarFactory___Microsoft::WRL::ComPtr_Windows::Internal::Shell::Experience::ITitleBarFactory____::_1_::dtor$0 @ 0x1802F53F5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7CC4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::wait_for_completion_Windows::Internal::Shell::Experience::TitleBarFactory___Microsoft::WRL::ComPtr_Windows::Internal::Shell::Experience::ITitleBarFactory____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
