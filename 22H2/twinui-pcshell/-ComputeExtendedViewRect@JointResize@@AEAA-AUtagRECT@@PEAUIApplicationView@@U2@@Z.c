/*
 * XREFs of ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x18048C828
 * Callers:
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x18048D490 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x18048D6F0 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall JointResize::ComputeExtendedViewRect(
        JointResize *this,
        struct tagRECT *__return_ptr retstr,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagRECT *a4)
{
  int v6; // eax
  struct IApplicationView *v7; // rdx
  __int64 v8; // rbx
  HWND WindowForView; // rax
  _DWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *retstr = *a4;
  v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), _DWORD *))(*a3)[16])(
         a3,
         v11);
  v8 = 0LL;
  if ( v6 >= 0 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, v7);
    if ( WindowForView && GetWindowRect(WindowForView, &Rect) )
    {
      do
      {
        *(LONG *)((char *)&retstr->left + v8 * 4) += v11[v8] - *(LONG *)((char *)&Rect.left + v8 * 4);
        ++v8;
      }
      while ( v8 < 4 );
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C9,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v6);
  }
  return retstr;
}
