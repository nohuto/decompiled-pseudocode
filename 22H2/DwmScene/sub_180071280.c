/*
 * XREFs of sub_180071280 @ 0x180071280
 * Callers:
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 * Callees:
 *     sub_1800703F0 @ 0x1800703F0 (sub_1800703F0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_current_owns @ 0x18011FA9E (_Mtx_current_owns.c)
 *     _Cnd_timedwait @ 0x18011FAB0 (_Cnd_timedwait.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x18011FAC2 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

__int64 __fastcall sub_180071280(_Cnd_t a1, _Mtx_t *a2, __int64 *a3)
{
  __int64 result; // rax
  bool v6; // di
  int v7; // eax
  xtime v8; // [rsp+20h] [rbp-38h] BYREF

  if ( *a3 <= 0 )
    return 1LL;
  v6 = sub_1800703F0((__int64)&v8, a3);
  if ( !Mtx_current_owns(*a2) )
  {
    std::_Throw_Cpp_error(4);
    JUMPOUT(0x18007131DLL);
  }
  v7 = Cnd_timedwait(a1, *a2, &v8);
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      std::_Throw_C_error(v7);
      __debugbreak();
    }
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v6 )
    return 0LL;
  return result;
}
