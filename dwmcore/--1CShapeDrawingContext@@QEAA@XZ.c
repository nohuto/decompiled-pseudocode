void __fastcall CShapeDrawingContext::~CShapeDrawingContext(CShapeDrawingContext *this)
{
  void *v2; // rcx
  __int64 v3; // rax
  CShapeDrawingContext *v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)this + 63);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 65) - (_QWORD)v2;
    v6 = v2;
    v5 = 8 * (v3 >> 3);
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v2 = v6;
    }
    operator delete(v2);
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
  }
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 8);
  v4 = (CShapeDrawingContext *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 == (CShapeDrawingContext *)((char *)this + 88) )
    v4 = 0LL;
  operator delete(v4);
  operator delete(*((void **)this + 6));
}
