/*
 * XREFs of ?GetOwnerWindow@CClassicWindowExternal@@UEAAJPEAPEAUHWND__@@@Z @ 0x1801D2BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::GetOwnerWindow(CClassicWindowExternal *this, HWND *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = -2147023728;
  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7)) )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
    *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
    v4 = 0;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v4;
}
