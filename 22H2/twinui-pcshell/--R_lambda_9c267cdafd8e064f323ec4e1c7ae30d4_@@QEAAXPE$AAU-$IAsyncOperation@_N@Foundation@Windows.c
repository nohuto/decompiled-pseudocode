/*
 * XREFs of ??R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@23@@Z @ 0x180394F40
 * Callers:
 *     ?Invoke@?$__abi_FunctorCapture@V_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@XPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@34@@Details@Platform@@UEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@56@@Z @ 0x1803959D0 (-Invoke@-$__abi_FunctorCapture@V_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@XPE$AAU-$IAsyncOperat.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035BE00 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??$make_exception_ptr@PE$AAVException@Platform@@@std@@YA?AVexception_ptr@0@PE$AAVException@Platform@@@Z @ 0x1803939DC (--$make_exception_ptr@PE$AAVException@Platform@@@std@@YA-AVexception_ptr@0@PE$AAVException@Platf.c)
 *     ?GetResults@?$IAsyncOperation@_N@Foundation@Windows@@UE$AAA_NXZ @ 0x1803958D0 (-GetResults@-$IAsyncOperation@_N@Foundation@Windows@@UE$AAA_NXZ.c)
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1803963DC (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x1803973B4 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 *     ?get@ErrorCode@IAsyncInfo@Foundation@Windows@@UE$AAA?AVHResult@34@XZ @ 0x1803986DC (-get@ErrorCode@IAsyncInfo@Foundation@Windows@@UE$AAA-AVHResult@34@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        int a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  Concurrency::details::_Task_impl_base *v6; // rbx
  __int64 v7; // rsi
  unsigned int *v8; // rax
  __int64 Exception; // r14
  const struct std::exception_ptr *v10; // rdx
  Concurrency::details::_Task_impl_base *v11; // rbx
  std::_Ref_count_base *v12; // rcx
  Concurrency::details::_Task_impl_base *v13; // rbx
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h]

  v3 = a1;
  if ( a3 == 2 )
  {
    v4 = *a1;
    v5 = v4 + 16;
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 8LL))(v4, v5, 0LL, 0LL, v4 + 16);
  }
  else if ( a3 == 3 )
  {
    v6 = (Concurrency::details::_Task_impl_base *)*a1;
    v7 = __abi_winrt_cast_to(0, a2, (__int64)&_uuidof__AUIAsyncInfo_Foundation_Windows__);
    v8 = (unsigned int *)Windows::Foundation::IAsyncInfo::ErrorCode::get(v7, &v17);
    Exception = Platform::Exception::ReCreateException(*v8);
    v18 = Exception;
    v10 = (const struct std::exception_ptr *)std::make_exception_ptr<Platform::Exception __gc *>(
                                               (__int64)v14,
                                               Exception);
    Concurrency::details::_Task_impl_base::_CancelWithException(v6, v10);
    __ExceptionPtrDestroy(v14);
    if ( Exception )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Exception + 16LL))(Exception);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v11 = (Concurrency::details::_Task_impl_base *)*a1;
    try
    {
      Windows::Foundation::IAsyncOperation<bool>::GetResults();
      Concurrency::details::_Task_impl<unsigned char>::_FinalizeAndRunContinuations(v11);
    }
    catch ( ... )
    {
      v13 = (Concurrency::details::_Task_impl_base *)*a1;
      __ExceptionPtrCreate(v14);
      __ExceptionPtrCurrentException(v14);
      Concurrency::details::_Task_impl_base::_CancelWithException(v13, (const struct std::exception_ptr *)v14);
      __ExceptionPtrDestroy(v14);
      v3 = a1;
    }
  }
  *v3 = 0LL;
  v12 = (std::_Ref_count_base *)v3[1];
  v3[1] = 0LL;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
