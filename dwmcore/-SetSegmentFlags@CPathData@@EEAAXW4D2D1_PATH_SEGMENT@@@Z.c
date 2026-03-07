void __fastcall CPathData::SetSegmentFlags(CPathData *this, enum D2D1_PATH_SEGMENT a2)
{
  *((_BYTE *)this + 49) = a2 | 0x80;
}
