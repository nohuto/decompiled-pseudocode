/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9_____lambda_e7233f2d7fbbc8c446f08901eacadde9___ @ 0x180367C10
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9___ @ 0x1803682D8 (MakeXamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1803586A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9_ @ 0x180369B28 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--_lambda_e7233f2d7fbbc8c446f08901eacadde9_.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9_____lambda_e7233f2d7fbbc8c446f08901eacadde9___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x1C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>((__int64)v4);
    *v5 = off_180649F08;
    v5[4] = off_180649F58;
    lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9_(v5 + 6, a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
