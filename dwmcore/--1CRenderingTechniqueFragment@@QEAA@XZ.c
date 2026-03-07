void __fastcall CRenderingTechniqueFragment::~CRenderingTechniqueFragment(CRenderingTechniqueFragment *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
    operator delete(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v3, *((_QWORD *)this + 5));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 4),
      (*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(this);
}
