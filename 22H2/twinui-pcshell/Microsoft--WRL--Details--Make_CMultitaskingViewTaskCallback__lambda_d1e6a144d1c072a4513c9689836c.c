/*
 * XREFs of Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const_&_ @ 0x1803F0D5C
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967___ @ 0x1803F0E7C (MakeMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1803F0550 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>((__int64)v4);
    *v5 = off_18052D590;
    v5[4] = off_18052D5E0;
    v5[6] = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5 + 6);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
