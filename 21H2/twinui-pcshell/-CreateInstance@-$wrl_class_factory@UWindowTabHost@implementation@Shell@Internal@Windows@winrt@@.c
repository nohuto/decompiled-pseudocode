/*
 * XREFs of ?CreateInstance@?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E8DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIUnknown@@@3@XZ @ 0x1800E5A14 (--$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIUnknown@@@3@XZ.c)
 *     ??$make@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AUWindowTabHost@Shell@Internal@Windows@0@XZ @ 0x1800E6BF0 (--$make@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@det.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EFEC (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, __int64 *, _QWORD **); // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>,>((__int64 *)&v12);
      winrt::Windows::Foundation::IUnknown::as<IUnknown>(&v12, &v11);
      v7 = (**v11)(v11, a3, a4);
      v8 = v7;
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
          (const char *)(unsigned int)v7);
      if ( v11 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v11);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v12);
      result = v8;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x3F,
                             (unsigned int)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
                             v9);
    }
  }
  return result;
}
