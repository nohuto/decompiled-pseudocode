/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x1804B2AC4
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1804B4F5C (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x1804B2BA0 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureContext::CreateAdjacentDesktop(
        VirtualDesktopGestureContext *this,
        bool *a2,
        unsigned int a3,
        int a4)
{
  VirtualDesktopGestureWindow **v5; // rbx
  VirtualDesktopGestureWindow **v8; // rsi
  VirtualDesktopGestureWindow *v9; // rcx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  struct tagRECT v14; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  v5 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v8 = &v5[*((_QWORD *)this + 10)];
  while ( 1 )
  {
    if ( v5 == v8 )
      return 0LL;
    v9 = *v5;
    v14.top = 0;
    v10 = *((_DWORD *)v9 + 44) - *((_DWORD *)v9 + 42);
    v14.left = a4 * v10;
    v14.right = v10 + a4 * v10;
    v14.bottom = *((_DWORD *)v9 + 45) - *((_DWORD *)v9 + 43);
    v11 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(v9, a2, a3, &v14);
    v12 = v11;
    if ( v11 < 0 )
      break;
    ++v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12D,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v11);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29A,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v12);
  return v12;
}
