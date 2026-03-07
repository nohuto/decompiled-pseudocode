__int64 __fastcall FlipManagerObject::IsEndpointConnected(FlipManagerObject *this, unsigned __int8 a2, bool *a3)
{
  __int64 v4; // rbp
  int v6; // ebx

  v4 = a2;
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    *a3 = *((_QWORD *)this + (v4 ^ 1) + 9) != 0LL;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
