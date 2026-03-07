void __fastcall CRenderData::~CRenderData(CRenderData *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  CDataStreamWriter *v5; // rcx
  CDataStreamWriter *v6; // rcx

  *(_QWORD *)this = &CRenderData::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CRenderData::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CRenderData::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 248;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 264;
  CRenderData::DestroyRenderData(this);
  v4 = (void *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(v4);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 21),
      (*((_QWORD *)this + 23) - *((_QWORD *)this + 21)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 136);
  CDataStreamWriter::FreeBlocks(v5, (struct _LIST_ENTRY *)((char *)this + 72));
  operator delete(*((void **)this + 13));
  CDataStreamWriter::FreeBlocks(v6, (struct _LIST_ENTRY *)((char *)this + 88));
  CResource::~CResource(this);
}
