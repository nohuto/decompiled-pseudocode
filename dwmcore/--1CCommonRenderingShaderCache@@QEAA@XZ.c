void __fastcall CCommonRenderingShaderCache::~CCommonRenderingShaderCache(CCommonRenderingShaderCache *this)
{
  int *v1; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  void *v7; // rcx

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
        v6 = *(volatile signed __int32 **)(v4 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v1 );
    }
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *v1 = 0;
}
