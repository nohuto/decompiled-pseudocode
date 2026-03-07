void __fastcall DXGCRITICALREGION::~DXGCRITICALREGION(DXGCRITICALREGION *this)
{
  if ( *((_BYTE *)this + 1) )
    DXGCRITICALREGION::Leave(this);
}
