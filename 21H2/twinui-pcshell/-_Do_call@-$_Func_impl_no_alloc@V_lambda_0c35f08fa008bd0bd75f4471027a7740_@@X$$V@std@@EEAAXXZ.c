/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X$$V@std@@EEAAXXZ @ 0x1803974C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035C0D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void,>::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax

  v1 = __abi_winrt_cast_to(
         0,
         *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 8),
         (__int64)&_uuidof__AUIAsyncInfo_Foundation_Windows__);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
