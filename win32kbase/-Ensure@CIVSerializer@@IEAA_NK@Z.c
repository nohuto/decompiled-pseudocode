char __fastcall CIVSerializer::Ensure(CIVSerializer *this, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 3);
  v3 = v2 + a2;
  if ( v2 + a2 < v2 || v3 > *((_DWORD *)this + 9) )
    return 0;
  *((_DWORD *)this + 3) = v3;
  return 1;
}
