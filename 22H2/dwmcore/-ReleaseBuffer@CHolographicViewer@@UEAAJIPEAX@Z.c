/*
 * XREFs of ?ReleaseBuffer@CHolographicViewer@@UEAAJIPEAX@Z @ 0x18025A330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewer::ReleaseBuffer(RTL_SRWLOCK *this, unsigned int a2, void *a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rcx
  int v8; // eax
  unsigned int v9; // edi

  v3 = this + 14;
  AcquireSRWLockShared(this + 14);
  Ptr = this[10].Ptr;
  if ( Ptr )
  {
    v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD, void *))(*(_QWORD *)Ptr + 64LL))(Ptr, a2, a3);
  }
  else
  {
    v8 = (int)this[13].Ptr;
    v9 = -2005270490;
    if ( v8 != 3 )
      v9 = -2005270527;
  }
  ReleaseSRWLockShared(v3);
  return v9;
}
