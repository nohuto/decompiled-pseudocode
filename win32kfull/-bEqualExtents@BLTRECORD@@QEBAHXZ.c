_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 44) - *((_DWORD *)this + 42) == *((_DWORD *)this + 38) - *((_DWORD *)this + 36)
      && *((_DWORD *)this + 45) - *((_DWORD *)this + 43) == *((_DWORD *)this + 39) - *((_DWORD *)this + 37);
}
