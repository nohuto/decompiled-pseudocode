void __fastcall CHolographicInteropTexture::EndFrame(RTL_SRWLOCK *this, __int64 a2, unsigned int a3, char a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rsi

  v4 = this + 51;
  v5 = a3;
  AcquireSRWLockExclusive(this + 51);
  if ( HIDWORD(this[30].Ptr) && (unsigned int)v5 < LODWORD(this[31].Ptr) )
  {
    if ( v5 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
    }
    *((_BYTE *)this[v5 + 26].Ptr + 88) = a4;
  }
  ReleaseSRWLockExclusive(v4);
}
