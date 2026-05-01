/*
 * XREFs of ?IsEmpty@CPinnedList@@UEAAJPEAH@Z @ 0x180159390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013AD6C (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPinnedList::IsEmpty(CPinnedList *this, int *a2)
{
  __int64 (__fastcall *v4)(CPinnedList *, __int64 **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  bool v8; // bl
  __int64 *v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  char v12; // [rsp+40h] [rbp-20h]
  __int64 *v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a2 = 0;
  v13 = 0LL;
  v4 = *(__int64 (__fastcall **)(CPinnedList *, __int64 **))(*(_QWORD *)this + 24LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v13);
  v5 = v4(this, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0LL;
    v7 = *v13;
    v10 = &v14;
    v11 = 0LL;
    v12 = 1;
    v8 = (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64 *, _QWORD))(v7 + 24))(v13, 1LL, &v11, 0LL) == 0;
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v10);
    if ( v8 )
      *a2 = 1;
    v6 = 0;
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(&v14, 0LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D3,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v13);
  return v6;
}
