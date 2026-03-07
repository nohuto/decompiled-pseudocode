PVOID __fastcall CHolographicExclusiveMode::GetActiveViewId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  PVOID Ptr; // rbx

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  Ptr = this[3].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return Ptr;
}
