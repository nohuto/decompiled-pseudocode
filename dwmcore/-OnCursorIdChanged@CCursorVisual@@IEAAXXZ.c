void __fastcall CCursorVisual::OnCursorIdChanged(CCursorVisual *this)
{
  struct CCursorState **v1; // rbx
  CCursorManager *v3; // rcx

  v1 = (struct CCursorState **)((char *)this + 720);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 90);
  if ( CCursorManager::TryClaimCursorState(
         v3,
         *((_QWORD *)this + 88),
         this,
         *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
         v1) )
  {
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2), this);
    *((_BYTE *)this + 736) = 1;
  }
  else if ( *((_BYTE *)this + 736) )
  {
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2), this);
    *((_BYTE *)this + 736) = 0;
  }
}
