/*
 * XREFs of ?GetRootWindow@CMultitaskingViewElementBase@@UEAAPEAUHWND__@@XZ @ 0x180412A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
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
