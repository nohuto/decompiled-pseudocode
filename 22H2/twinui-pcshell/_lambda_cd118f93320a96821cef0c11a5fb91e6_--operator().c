/*
 * XREFs of _lambda_cd118f93320a96821cef0c11a5fb91e6_::operator() @ 0x180068CE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cd118f93320a96821cef0c11a5fb91e6___::Run @ 0x180068CC0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_cd118f93320a96821cef0c11a5fb91e6___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BED68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_cd118f93320a96821cef0c11a5fb91e6_::operator()(__int64 *a1)
{
  HSTRING v1; // rbx
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  int ActivationFactory; // eax
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v20; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v21; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15 = 0LL;
  v21 = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &v20, &v21);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v1 = v21;
  }
  ActivationFactory = RoGetActivationFactory(v1, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v15);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE4,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v15);
    goto LABEL_17;
  }
  v16 = 0LL;
  v7 = *a1;
  LOBYTE(v7) = *(_DWORD *)(*a1 + 240) == 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 136LL))(v15, v7, &v16);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0xBE7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v8,
      v15);
    __debugbreak();
    JUMPOUT(0x180199A90LL);
  }
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 288) + 144LL))(
                    *(_QWORD *)(*a1 + 288),
                    &v19);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 48LL))(*v10, &v18);
  (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v11)(*v11, &GUID_d928b176_b291_4bd6_9f6f_2e21e3ef6cbc, &v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v12 = v17;
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 56LL))(v17, *(unsigned int *)(*a1 + 304), v16);
    v12 = v17;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return 0LL;
}
