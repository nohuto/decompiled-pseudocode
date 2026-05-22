/*
 * XREFs of std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x18006CA5C
 * Callers:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18006CB10 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18006938C (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18006A004 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

void __fastcall std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___(__int64 a1, __int64 a2)
{
  std::exception_ptr *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v6[24]; // [rsp+40h] [rbp-18h] BYREF

  __ExceptionPtrCreate(v4);
  v5[0] = v4;
  v5[1] = a2;
  if ( std::_Execute_once(
         (struct std::once_flag *)&MPCGamepadInputHelper::s_singletonCreated,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_e877c53153750a022a5d5eb128b5cc30_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v5) )
  {
    __ExceptionPtrDestroy(v4);
  }
  else
  {
    if ( __ExceptionPtrToBool(v4) )
    {
      v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v6, (const struct std::exception_ptr *)v4);
      std::rethrow_exception(v3);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30____::_1_::dtor_0();
  }
}
