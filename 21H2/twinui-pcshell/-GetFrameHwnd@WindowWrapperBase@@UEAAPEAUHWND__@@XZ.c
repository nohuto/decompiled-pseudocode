/*
 * XREFs of ?GetFrameHwnd@WindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x18006B640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall WindowWrapperBase::GetFrameHwnd(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  return (HWND)*((_QWORD *)this + 16);
}
