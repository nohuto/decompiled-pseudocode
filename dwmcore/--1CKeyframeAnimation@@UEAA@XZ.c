void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  __int64 v1; // rbp
  char *i; // rsi
  CResource *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *((_BYTE *)this + 580) &= ~1u;
  v1 = 0LL;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  for ( i = (char *)this + 400; (unsigned int)v1 < *((_DWORD *)this + 106); v1 = (unsigned int)(v1 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)i + 8 * v1) + 216LL))(
      *(_QWORD *)(*(_QWORD *)i + 8 * v1),
      0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)i + 8 * v1) + 16LL))(*(_QWORD *)(*(_QWORD *)i + 8 * v1));
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(i, 8LL);
  if ( (*((_BYTE *)this + 581) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  v4 = (CResource *)*((_QWORD *)this + 44);
  if ( v4 )
  {
    CResource::InternalRelease(v4);
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_QWORD *)this + 47) )
  {
    ReleaseInterface<CSharedSection>((char *)this + 376);
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 48);
    if ( v5 )
    {
      operator delete(v5);
      *((_QWORD *)this + 48) = 0LL;
    }
  }
  v6 = *((_QWORD *)this + 58);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(v6, *((_QWORD *)this + 59));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 58),
      (*((_QWORD *)this + 60) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 57);
  DynArrayImpl<0>::~DynArrayImpl<0>(i);
  v7 = (char *)*((_QWORD *)this + 49);
  if ( v7 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 49));
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v7 + 64);
    operator delete(v7);
  }
  v8 = *((_QWORD *)this + 43);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 42);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  CBaseExpression::~CBaseExpression(this);
}
