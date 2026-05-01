/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18007BA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView **a2)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rcx
  struct IApplicationView *v6; // rax
  unsigned int v7; // edi

  *a2 = 0LL;
  v2 = this + 67;
  AcquireSRWLockShared(this + 67);
  Ptr = this[72].Ptr;
  if ( !Ptr || ((__int64)this[73].Ptr & 1) != 0 )
  {
    v7 = -2147023728;
  }
  else
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v6 = (struct IApplicationView *)this[72].Ptr;
    v7 = 0;
    *a2 = v6;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v7;
}
