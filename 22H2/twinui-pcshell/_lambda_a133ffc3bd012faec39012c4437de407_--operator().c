/*
 * XREFs of _lambda_a133ffc3bd012faec39012c4437de407_::operator() @ 0x18014EF48
 * Callers:
 *     _lambda_a133ffc3bd012faec39012c4437de407_::_lambda_invoker_cdecl_ @ 0x18014E750 (_lambda_a133ffc3bd012faec39012c4437de407_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18004675C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008ABA8 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 lambda_a133ffc3bd012faec39012c4437de407_::operator()(
        __int64 a1,
        struct _TP_CALLBACK_INSTANCE *a2,
        __int64 a3,
        ...)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IInspectable *v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, struct IInspectable *);
  v7 = a1;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    &v7,
    (__int64 *)(a3 + 152));
  DisassociateCurrentThreadFromCallback(a2);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  v4 = Microsoft::WRL::WeakRef::InternalResolve(
         (Microsoft::WRL::WeakRef *)&v7,
         &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
         (struct IInspectable **)va);
  if ( v4 >= 0 )
  {
    if ( v8 )
      ((void (__fastcall *)(struct IInspectable *, _QWORD, _QWORD))v8->lpVtbl->GetIids)(v8, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x48E,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
