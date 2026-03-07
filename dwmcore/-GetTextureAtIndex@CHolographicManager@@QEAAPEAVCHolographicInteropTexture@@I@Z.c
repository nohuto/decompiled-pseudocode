struct CHolographicInteropTexture *__fastcall CHolographicManager::GetTextureAtIndex(
        RTL_SRWLOCK *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *Ptr; // rcx
  __int64 v5; // rbp

  v3 = a2;
  AcquireSRWLockShared(this + 13);
  Ptr = this[18].Ptr;
  v5 = 0LL;
  if ( v3 < ((char *)this[19].Ptr - (char *)Ptr) >> 3 )
    v5 = Ptr[v3];
  ReleaseSRWLockShared(this + 13);
  return (struct CHolographicInteropTexture *)v5;
}
