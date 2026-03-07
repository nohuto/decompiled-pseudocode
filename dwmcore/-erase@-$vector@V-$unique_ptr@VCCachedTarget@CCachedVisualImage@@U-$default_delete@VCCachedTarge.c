CCachedVisualImage::CCachedTarget ***__fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
        __int64 a1,
        CCachedVisualImage::CCachedTarget ***a2,
        CCachedVisualImage::CCachedTarget **a3)
{
  CCachedVisualImage::CCachedTarget **v3; // r12
  CCachedVisualImage::CCachedTarget **v4; // rdi
  __int64 v8; // rax
  void *v9; // rdi
  CCachedVisualImage::CCachedTarget ***result; // rax
  CCachedVisualImage::CCachedTarget **v11; // rsi
  CCachedVisualImage::CCachedTarget *v12; // rax
  CCachedVisualImage::CCachedTarget *v13; // r15

  v3 = *(CCachedVisualImage::CCachedTarget ***)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v11 = a3;
    do
    {
      if ( v11 != v4 )
      {
        v12 = *v4;
        *v4 = 0LL;
        v13 = *v11;
        *v11 = v12;
        if ( v13 )
        {
          CCachedVisualImage::CCachedTarget::~CCachedTarget(v13);
          operator delete(v13, 0x40uLL);
        }
      }
      ++v4;
      ++v11;
    }
    while ( v4 != v3 );
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(void **)(v8 - 8);
  if ( v9 )
  {
    CCachedVisualImage::CCachedTarget::~CCachedTarget(*(CCachedVisualImage::CCachedTarget **)(v8 - 8));
    operator delete(v9, 0x40uLL);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
