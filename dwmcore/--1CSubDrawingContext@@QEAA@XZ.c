void __fastcall CSubDrawingContext::~CSubDrawingContext(CSubDrawingContext *this)
{
  int updated; // eax
  void *v3; // rdi
  void *v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 1) )
  {
    updated = CD2DContext::UpdateContextOwner(
                (CD2DContext *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 16LL),
                (const struct ID2DContextOwner *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)));
    if ( updated < 0 )
      ModuleFailFastForHRESULT((unsigned int)updated, retaddr);
  }
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CCpuClippingData::CpuClipRealization **)this + 10));
    operator delete(v3, 0x88uLL);
  }
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    operator delete(v4, 0x44uLL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
