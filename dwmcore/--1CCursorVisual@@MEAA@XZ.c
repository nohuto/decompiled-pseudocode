void __fastcall CCursorVisual::~CCursorVisual(CCursorVisual *this)
{
  __int64 *v2; // rdi
  CCursorState *v3; // rcx

  v2 = (__int64 *)((char *)this + 720);
  *(_QWORD *)this = &CCursorVisual::`vftable';
  v3 = (CCursorState *)*((_QWORD *)this + 90);
  if ( v3 )
  {
    CCursorState::ClearVisual(v3);
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2), this);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CVisual::~CVisual(this);
}
