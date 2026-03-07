void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this)
{
  void **v2; // rbx
  __int64 v3; // rsi

  v2 = (void **)((char *)this + 72);
  v3 = 18LL;
  do
  {
    if ( *v2 )
    {
      operator delete(*v2);
      *v2 = 0LL;
    }
    v2 += 4;
    --v3;
  }
  while ( v3 );
  DXGFASTMUTEX::~DXGFASTMUTEX((QDC_CACHE *)((char *)this + 8));
}
