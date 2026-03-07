void __fastcall CBrushDrawListGenerator::~CBrushDrawListGenerator(CBrushDrawListGenerator *this)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  __int64 v5; // rdi

  *((_DWORD *)this + 4) = 0;
  v1 = (_DWORD *)((char *)this + 72);
  v2 = 0LL;
  for ( *(_OWORD *)((char *)this + 20) = _xmm; (unsigned int)v2 < *v1; v2 = (unsigned int)(v2 + 1) )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v2 + 5);
    *((_QWORD *)this + v2 + 5) = 0LL;
    if ( v4 )
      std::default_delete<CDrawListBrush>::operator()((__int64)this, v4);
  }
  *v1 = 0;
  v5 = 4LL;
  do
  {
    v1 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v1);
    --v5;
  }
  while ( v5 );
}
