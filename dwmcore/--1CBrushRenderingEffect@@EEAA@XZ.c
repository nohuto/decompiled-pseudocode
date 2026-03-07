void __fastcall CBrushRenderingEffect::~CBrushRenderingEffect(CBrushRenderingEffect *this)
{
  CDrawListBitmap *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rcx

  v2 = (CBrushRenderingEffect *)((char *)this + 120);
  v3 = 4LL;
  do
  {
    v2 = (CDrawListBitmap *)((char *)v2 - 24);
    CDrawListBitmap::~CDrawListBitmap(v2);
    --v3;
  }
  while ( v3 );
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
  }
}
