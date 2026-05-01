/*
 * XREFs of ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1804B6390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804B6340 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::PinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, LPCWCH *); // rbx
  const WCHAR *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r14
  bool v8; // si
  const WCHAR *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  LPCWCH lpString2; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPCWCH v17; // [rsp+80h] [rbp+30h]

  if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)this + 128LL))(this) )
  {
    lpString2 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v4 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v14 = -1LL;
    v15 = -1LL;
    if ( v4(a2, &lpString2) < 0
      || (v5 = lpString2, v17 = lpString2, v6 = *((_QWORD *)this + 12), v7 = *((_QWORD *)this + 13), v6 == v7) )
    {
LABEL_10:
      v8 = 0;
    }
    else
    {
      v8 = 1;
      while ( 1 )
      {
        v9 = (const WCHAR *)v6;
        if ( *(_QWORD *)(v6 + 24) >= 8uLL )
          v9 = *(const WCHAR **)v6;
        if ( CompareStringOrdinal(v9, -1, v5, -1, 1) == 2 )
          break;
        v6 += 32LL;
        if ( v6 == v7 )
          goto LABEL_10;
        v5 = v17;
      }
    }
    v10 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      return v11;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return 0LL;
}
