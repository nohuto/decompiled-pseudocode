void __fastcall CPathData::SetFillMode(CPathData *this, enum D2D1_FILL_MODE a2)
{
  *((_BYTE *)this + 48) = a2 | 0x80;
}
