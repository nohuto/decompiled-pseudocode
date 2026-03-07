__int64 __fastcall HFDBASIS32::lParentErrorDividedBy4(HFDBASIS32 *this)
{
  int v1; // r9d
  unsigned int v2; // r8d
  int v3; // edx
  int v4; // eax

  v1 = *((_DWORD *)this + 3);
  v2 = abs32(v1);
  v3 = 2 * *((_DWORD *)this + 2);
  v4 = v1 - v3;
  if ( v3 - v1 >= 0 )
    v4 = v3 - v1;
  if ( (int)v2 <= v4 )
  {
    if ( v3 - v1 >= 0 )
      return (unsigned int)(v3 - v1);
    else
      return (unsigned int)(v1 - v3);
  }
  return v2;
}
