/*
 * XREFs of ??$make_exception_ptr@PE$AAVException@Platform@@@std@@YA?AVexception_ptr@0@PE$AAVException@Platform@@@Z @ 0x1803939DC
 * Callers:
 *     ??R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@23@@Z @ 0x180394F40 (--R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU-$IAsyncOperation@_N@Foundation@Windows.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x180396808 (-_Copy_exception@exception_ptr@std@@SA-AV12@PEAXPEBX@Z.c)
 */

__int64 __fastcall std::make_exception_ptr<Platform::Exception __gc *>(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v4 = __abi_winrt_ptr_ctor(a2);
  std::exception_ptr::_Copy_exception(a1, &v4, &TI9PE_AAVException_Platform__);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
