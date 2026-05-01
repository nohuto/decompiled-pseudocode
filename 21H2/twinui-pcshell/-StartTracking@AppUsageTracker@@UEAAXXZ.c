/*
 * XREFs of ?StartTracking@AppUsageTracker@@UEAAXXZ @ 0x1804C75E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::StartTracking(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  int Ptr; // eax
  PVOID v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 7;
  AcquireSRWLockShared(this + 7);
  Ptr = (int)this[8].Ptr;
  v7 = Ptr;
  if ( v1 )
  {
    ReleaseSRWLockShared(v1);
    Ptr = v7;
  }
  v4 = this[9].Ptr;
  if ( v4 )
  {
    if ( !Ptr )
    {
      v5 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, int *))(*(_QWORD *)v4 + 96LL))(v4, this + 1, &v7);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          89LL,
          (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
    }
  }
  AcquireSRWLockExclusive(v1);
  LODWORD(this[8].Ptr) = v7;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
