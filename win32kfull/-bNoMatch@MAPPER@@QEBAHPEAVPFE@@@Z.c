__int64 __fastcall MAPPER::bNoMatch(MAPPER *this, struct PFE *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 46);
  v3 = 1;
  if ( v2 >= *((_DWORD *)this + 45) )
  {
    if ( v2 == *((_DWORD *)this + 45) && (*((_DWORD *)this + 63) & 0x1000080) == 0 )
      return *((_DWORD *)a2 + 20) >= *((_DWORD *)this + 52);
  }
  else
  {
    return 0;
  }
  return v3;
}
