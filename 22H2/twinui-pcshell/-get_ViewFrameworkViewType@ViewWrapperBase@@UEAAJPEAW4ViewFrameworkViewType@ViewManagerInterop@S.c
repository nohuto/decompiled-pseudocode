/*
 * XREFs of ?get_ViewFrameworkViewType@ViewWrapperBase@@UEAAJPEAW4ViewFrameworkViewType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180343CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::get_ViewFrameworkViewType(
        ViewWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::ViewFrameworkViewType *a2)
{
  __int64 (__fastcall *v4)(ViewWrapperBase *, HSTRING, int *); // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v9; // [rsp+28h] [rbp-30h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0;
  *(_DWORD *)a2 = 6;
  v4 = *(__int64 (__fastcall **)(ViewWrapperBase *, HSTRING, int *))(*(_QWORD *)this + 416LL);
  if ( WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &v10, &v9) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v5 = v4(this, v9, &v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_DWORD *)a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
