void __fastcall lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_(DXGADAPTER **this)
{
  DxgkRedrawCursorForPostCompositon(*this);
  DXGADAPTER_REFERENCE::Assign(this, 0LL);
  operator delete(this);
}
