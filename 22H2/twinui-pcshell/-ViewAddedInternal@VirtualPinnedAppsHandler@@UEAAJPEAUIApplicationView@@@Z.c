/*
 * XREFs of ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180079E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804B5FB0 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::ViewAddedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  const WCHAR *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // rdx
  const WCHAR *v12; // rcx
  LPVOID pv[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const WCHAR *v15; // [rsp+78h] [rbp+10h]

  pv[0] = 0LL;
  v4 = *(_QWORD *)a2;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v4 + 136))(a2, pv);
  v6 = v5;
  if ( v5 == -2147023728 )
    goto LABEL_4;
  if ( v5 >= 0 )
  {
    v7 = (const WCHAR *)pv[0];
    v15 = (const WCHAR *)pv[0];
    v8 = *((_QWORD *)this + 13);
    v9 = *((_QWORD *)this + 12);
    if ( v9 != v8 )
    {
      while ( 1 )
      {
        v12 = (const WCHAR *)v9;
        if ( *(_QWORD *)(v9 + 24) >= 8uLL )
          v12 = *(const WCHAR **)v9;
        if ( CompareStringOrdinal(v12, -1, v7, -1, 1) == 2 )
          break;
        v9 += 32LL;
        if ( v9 == v8 )
          goto LABEL_4;
        v7 = v15;
      }
      v5 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v11 = 299LL;
        goto LABEL_16;
      }
    }
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  v11 = 295LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_5:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v6;
}
