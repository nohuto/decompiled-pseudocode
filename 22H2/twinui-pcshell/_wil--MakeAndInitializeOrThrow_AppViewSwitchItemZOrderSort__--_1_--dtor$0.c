/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x1803B1007
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C89F8 (--1-$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(*(__int64 **)(a2 + 64));
  }
  return result;
}
