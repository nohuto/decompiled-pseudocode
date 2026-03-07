void __fastcall FxString::~FxString(FxString *this, unsigned int a2, unsigned int a3)
{
  wchar_t *Buffer; // rcx

  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  FxObject::~FxObject(this, a2, a3);
}
