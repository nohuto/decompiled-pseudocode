/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1C02F4AFC
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

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
