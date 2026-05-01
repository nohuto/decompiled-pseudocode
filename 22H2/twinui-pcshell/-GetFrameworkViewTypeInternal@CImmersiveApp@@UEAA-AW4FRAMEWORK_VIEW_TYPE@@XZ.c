/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x180027AD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BED68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  int (__fastcall *v3)(__int64, HSTRING, unsigned int *); // rsi
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF

  v1 = 6;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a1 + 352LL))(
         a1,
         2LL,
         &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
         &v11) >= 0 )
  {
    v10 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
           &v10) >= 0 )
    {
      v2 = v10;
      v3 = *(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v10 + 416LL);
      string = 0LL;
      v4 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v4 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
        __debugbreak();
      }
      if ( v3(v2, string, &v12) >= 0 )
        v1 = v12;
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v1;
}
