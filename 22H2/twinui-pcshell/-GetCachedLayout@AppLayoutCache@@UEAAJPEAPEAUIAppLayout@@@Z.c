/*
 * XREFs of ?GetCachedLayout@AppLayoutCache@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x180473490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppLayoutCache::GetCachedLayout(RTL_SRWLOCK *this, struct IAppLayout **a2)
{
  RTL_SRWLOCK *v4; // rdi
  PVOID Ptr; // rcx
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = this + 6;
  AcquireSRWLockShared(this + 6);
  Ptr = this[7].Ptr;
  if ( Ptr )
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, GUID *, struct IAppLayout **))(*(_QWORD *)Ptr + 192LL))(
           Ptr,
           &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
           a2);
  }
  else
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\applayoutcache.cpp",
      (const char *)0x80070490LL);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
