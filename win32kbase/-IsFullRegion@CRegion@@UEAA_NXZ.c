bool __fastcall CRegion::IsFullRegion(CRegion *this)
{
  return *((_DWORD *)this + 3) == 1;
}
