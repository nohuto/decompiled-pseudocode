bool __fastcall CVisual::IsPassiveUpdateMode(CVisual *this)
{
  while ( this && (*((_BYTE *)this + 102) & 8) == 0 )
    this = (CVisual *)*((_QWORD *)this + 11);
  return this != 0LL;
}
