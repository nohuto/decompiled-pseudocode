CDrawListEntryBatch *__fastcall CDrawListEntryBatch::CDrawListEntryBatch(
        CDrawListEntryBatch *this,
        struct CD3DDevice *a2,
        struct CDrawListEntryBatch::CSharedDirect3DResources *a3)
{
  _QWORD *v4; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 13) = -1;
  *((_QWORD *)this + 13) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CDrawListEntryBatch::CSharedDirect3DResources *)((char *)a3 + 8));
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v4[1] = 0LL;
  *((_QWORD *)this + 14) = v4;
  *v4 = (char *)this + 112;
  return this;
}
