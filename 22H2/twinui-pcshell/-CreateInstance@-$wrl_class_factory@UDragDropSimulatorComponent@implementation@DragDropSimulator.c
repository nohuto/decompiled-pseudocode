/*
 * XREFs of ?CreateInstance@?$wrl_class_factory@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D1DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EC5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIUnknown@@UIObjectWithSite@@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUIObjectWithSite@@@Z @ 0x1804D081C (--$as@UIUnknown@@UIObjectWithSite@@@impl@winrt@@YA-AU-$com_ptr@UIUnknown@@@1@PEAUIObjectWithSite.c)
 *     ??$make@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1804D0BDC (--$make@V-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::wrl_class_factory<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::CreateInstance(
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
  __int64 (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>,>(&v11);
      winrt::impl::as<IUnknown,IObjectWithSite>(&v12, v11);
      v7 = (**v12)(v12, a3, a4);
      v8 = v7;
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
          (const char *)(unsigned int)v7);
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v12);
      if ( v11 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v11);
      result = v8;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x3F,
                             (__int64)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
                             v9);
    }
  }
  return result;
}
