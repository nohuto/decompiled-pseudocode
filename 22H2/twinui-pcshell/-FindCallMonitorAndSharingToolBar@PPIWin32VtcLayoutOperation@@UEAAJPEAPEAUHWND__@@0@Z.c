/*
 * XREFs of ?FindCallMonitorAndSharingToolBar@PPIWin32VtcLayoutOperation@@UEAAJPEAPEAUHWND__@@0@Z @ 0x1800D8200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::FindCallMonitorAndSharingToolBar(
        PPIWin32VtcLayoutOperation *this,
        HWND *a2,
        HWND *a3)
{
  HWND v5; // rax
  DWORD WindowThreadProcessId; // eax
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = (HWND)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 216LL))((char *)this - 176);
  if ( v5
    && (WindowThreadProcessId = GetWindowThreadProcessId(v5, 0LL)) != 0
    && ((lParam[0] = (LPARAM)a2,
         lParam[1] = (LPARAM)a3,
         EnumThreadWindows(
           WindowThreadProcessId,
           (WNDENUMPROC)lambda_01817d008a5b624f885df37ad7067736_::_lambda_invoker_cdecl_,
           (LPARAM)lParam),
         *a2)
     || *a3) )
  {
    return 0LL;
  }
  else
  {
    return 2147943568LL;
  }
}
