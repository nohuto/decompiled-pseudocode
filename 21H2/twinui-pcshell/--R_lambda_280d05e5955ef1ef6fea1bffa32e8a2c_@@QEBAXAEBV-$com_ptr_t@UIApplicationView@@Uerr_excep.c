/*
 * XREFs of ??R_lambda_280d05e5955ef1ef6fea1bffa32e8a2c_@@QEBAXAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D65C4
 * Callers:
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C6B8 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215F48 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804496C4 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall _lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *result; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = **a1;
  if ( v4 == *a1[1] )
  {
    wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v9);
    *(_WORD *)(v9 + 112) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 320LL))(*a2, v9);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        236LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    return (__int64 *)Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v9);
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 16);
    v10 = *a2;
    v5 = a1[2][7];
    if ( !v5 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v10, &v9);
    result = (__int64 *)**a1;
    **a1 = *result;
  }
  return result;
}
