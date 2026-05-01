/*
 * XREFs of CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x1803F3E80
 * Callers:
 *     ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x1803F53A0 (-LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x1803F4118 (CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___--CIconLoadingNotifi.c)
 */

__int64 __fastcall CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  void *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___(
                                                                   v5,
                                                                   a1),
        (v7 = v6) != 0LL) )
  {
    v8 = (**v6)(v6, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a3);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v8);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)0x8007000ELL);
  }
  return v9;
}
