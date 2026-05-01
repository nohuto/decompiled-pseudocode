/*
 * XREFs of _lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa_ @ 0x18037F06C
 * Callers:
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180381910 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_61aef9b7069e9b07cc0657df3b99dbfa_::_lambda_61aef9b7069e9b07cc0657df3b99dbfa_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *result; // rax

  *a1 = __abi_winrt_ptr_ctor(*a2);
  result = a1;
  a1[1] = *a3;
  return result;
}
