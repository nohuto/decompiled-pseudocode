__int64 __fastcall CHolographicInteropTexture::GetSharedHandle(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v7; // r15
  unsigned int v8; // edi

  v4 = this + 41;
  v5 = a3;
  v7 = a2;
  v8 = 0;
  *a4 = 0LL;
  AcquireSRWLockShared(this + 41);
  if ( (unsigned int)v7 >= HIDWORD(this[20].Ptr) || (unsigned int)v5 >= LODWORD(this[21].Ptr) )
  {
    v8 = -2147024809;
  }
  else
  {
    if ( v5 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
    }
    _mm_lfence();
    *a4 = (void *)*((_QWORD *)this[v5 + 16].Ptr + 12 * v7 + 1);
  }
  ReleaseSRWLockShared(v4);
  return v8;
}
