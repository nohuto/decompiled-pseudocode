/*
 * XREFs of ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180038828
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026158 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BE3CC (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001AF4C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD46C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHierarchyWithWindowManager::StartAppViewWatcher(ViewHierarchyWithWindowManager *this)
{
  _QWORD *v2; // rax
  int v3; // eax
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = operator new(0x18uLL);
  v2[1] = this;
  *((_DWORD *)v2 + 4) = 1;
  *v2 = &off_1801AB4E0;
  v9 = v2;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**((_QWORD **)this + 1) + 80LL))(
         *((_QWORD *)this + 1),
         v2,
         &v8);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *((_QWORD *)this + 5) = v8;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v9);
  v4 = operator new(0x18uLL);
  v4[1] = this;
  *((_DWORD *)v4 + 4) = 1;
  *v4 = &off_1801AB4C0;
  v9 = v4;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**((_QWORD **)this + 1) + 96LL))(
         *((_QWORD *)this + 1),
         v4,
         &v8);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *((_QWORD *)this + 6) = v8;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v9);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 408LL))(*((_QWORD *)this + 1));
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  return 0LL;
}
