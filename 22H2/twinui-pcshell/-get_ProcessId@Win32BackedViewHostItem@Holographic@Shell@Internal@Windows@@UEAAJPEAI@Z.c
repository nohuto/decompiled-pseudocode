/*
 * XREFs of ?get_ProcessId@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAI@Z @ 0x1802C5D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_ProcessId(
        RTL_SRWLOCK *this,
        unsigned int *a2)
{
  RTL_SRWLOCK *v2; // rdi
  HWND Ptr; // rbx
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v2 = this + 28;
  AcquireSRWLockShared(this + 28);
  Ptr = (HWND)this[66].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  dwProcessId = 0;
  GetWindowThreadProcessId(Ptr, &dwProcessId);
  *a2 = dwProcessId;
  return 0LL;
}
