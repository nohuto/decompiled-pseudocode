void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 i; // r14
  __int64 v4; // r15
  _QWORD *Ptr; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rcx
  char *v10; // rdi

  v1 = this + 51;
  AcquireSRWLockExclusive(this + 51);
  for ( i = 0LL; (unsigned int)i < LODWORD(this[31].Ptr); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
      JUMPOUT(0x1802A80E6LL);
    }
    if ( this[i + 26].Ptr )
    {
      if ( HIDWORD(this[30].Ptr) )
      {
        v4 = 0LL;
        do
        {
          _mm_lfence();
          Ptr = this[i + 26].Ptr;
          v6 = 96 * v4;
          v7 = Ptr[12 * v4];
          if ( v7 )
          {
            v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            Ptr[(unsigned __int64)v6 / 8] = 0LL;
          }
          _mm_lfence();
          if ( *(_QWORD *)((char *)this[i + 26].Ptr + v6 + 8) )
          {
            _mm_lfence();
            CloseHandle(*(HANDLE *)((char *)this[i + 26].Ptr + v6 + 8));
            *(_QWORD *)((char *)this[i + 26].Ptr + v6 + 8) = 0LL;
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < HIDWORD(this[30].Ptr) );
      }
      _mm_lfence();
      v9 = (char *)this[i + 26].Ptr;
      if ( v9 )
      {
        v10 = v9 - 8;
        `vector destructor iterator'(
          v9,
          96LL,
          *((_QWORD *)v9 - 1),
          (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::~RenderBuffer);
        operator delete[](v10);
      }
      this[i + 26].Ptr = 0LL;
    }
  }
  HIDWORD(this[30].Ptr) = 0;
  BYTE1(this[30].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
