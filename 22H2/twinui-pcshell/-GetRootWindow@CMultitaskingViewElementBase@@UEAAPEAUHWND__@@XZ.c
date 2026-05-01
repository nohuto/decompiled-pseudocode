/*
 * XREFs of ?GetRootWindow@CMultitaskingViewElementBase@@UEAAPEAUHWND__@@XZ @ 0x1804126C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CMultitaskingViewElementBase::GetRootWindow(CMultitaskingViewElementBase *this)
{
  __int64 v1; // rcx
  HWND result; // rax

  v1 = *((_QWORD *)this + 10);
  result = 0LL;
  if ( v1 )
    return (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 328LL))(v1);
  return result;
}
