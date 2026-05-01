/*
 * XREFs of ??$MakeAndInitialize@VTitleBarController@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Details@WRL@Microsoft@@YAJPEAPEAVTitleBarController@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802F48A0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x1802F49B8 (--$MakeAndInitializeOrThrow@VTitleBarController@@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_p.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0TitleBarController@@QEAA@XZ @ 0x1802F5570 (--0TitleBarController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F7318 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TitleBarController,TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
        TitleBarController **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  TitleBarController *v5; // rax
  TitleBarController *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  TitleBarController *v13; // [rsp+40h] [rbp+8h] BYREF
  TitleBarController *v14; // [rsp+50h] [rbp+18h]
  TitleBarController *v15; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (TitleBarController *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  v13 = v5;
  if ( v5 )
  {
    v15 = v5;
    v6 = TitleBarController::TitleBarController(v5);
    v15 = v6;
    v14 = 0LL;
    v7 = *a2;
    *a2 = 0LL;
    v13 = 0LL;
    v8 = *((_QWORD *)v6 + 25);
    *((_QWORD *)v6 + 25) = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
    if ( v6 )
    {
      v10 = *((_QWORD *)v6 + 9);
      while ( v10 >= 0 )
      {
        if ( (_DWORD)v10 != 0x7FFFFFFF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 9, v10 + 1, v10);
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_12;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v9);
    }
LABEL_12:
    *a1 = v6;
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
