/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlAllUpViewHost__::_1_::dtor$0 @ 0x18036817F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18036C2B8 (--1-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_XamlAllUpViewHost__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<XamlAllUpViewHost>::~ComPtr<XamlAllUpViewHost>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
