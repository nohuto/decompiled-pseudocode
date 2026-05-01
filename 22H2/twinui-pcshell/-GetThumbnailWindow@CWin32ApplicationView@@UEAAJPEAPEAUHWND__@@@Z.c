/*
 * XREFs of ?GetThumbnailWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x1802038E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetThumbnailWindow(CWin32ApplicationView *this, HWND *a2)
{
  HWND v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v4 = GhostWindowFromHungWindow(v3);
  if ( v4 )
    v3 = (HWND)v4;
  result = 0LL;
  *a2 = v3;
  return result;
}
