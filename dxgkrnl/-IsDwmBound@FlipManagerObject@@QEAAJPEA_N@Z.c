__int64 __fastcall FlipManagerObject::IsDwmBound(FlipManagerObject *this, bool *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    *a2 = *((_QWORD *)this + 10) == 1LL;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
