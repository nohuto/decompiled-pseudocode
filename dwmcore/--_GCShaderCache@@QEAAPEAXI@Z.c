CShaderCache *__fastcall CShaderCache::`scalar deleting destructor'(CShaderCache *this)
{
  int *v1; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax
  void *v6; // rcx

  v1 = (int *)((char *)this + 16);
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *v1 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v4 + v5) )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CMILRefCountBaseT<IMILRefCount>::InternalRelease();
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v1 );
    }
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  *v1 = 0;
  operator delete(this, 0x20uLL);
  return this;
}
