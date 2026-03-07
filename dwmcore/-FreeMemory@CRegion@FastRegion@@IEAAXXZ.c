void __fastcall FastRegion::CRegion::FreeMemory(void **this)
{
  _DWORD *v1; // rdi

  v1 = this + 1;
  if ( this + 1 != *this )
  {
    operator delete(*this);
    *this = v1;
    *v1 = 0;
  }
}
