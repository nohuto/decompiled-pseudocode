/*
 * XREFs of ?Activate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x1802BD4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::Activate(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  HWND Ptr; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 28;
  AcquireSRWLockShared(this + 28);
  Ptr = (HWND)this[66].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  if ( SetForegroundWindow(Ptr) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1D9,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v4);
}
