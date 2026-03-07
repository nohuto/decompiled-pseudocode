float __fastcall CHolographicExclusiveMode::GetOpacity(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  float v3; // xmm6_4

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = *((float *)&this[4].Ptr + 1);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
