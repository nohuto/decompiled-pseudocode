char __fastcall CCD_TOPOLOGY::IsPrimaryClonePathByModality(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  int v4; // r10d
  char v5; // cl
  int v6; // eax
  _DWORD *i; // r8

  v2 = *((_QWORD *)this + 8);
  v3 = *(unsigned __int16 *)(v2 + 20);
  v4 = *(_DWORD *)(296LL * a2 + v2 + 240);
  v5 = 0;
  v6 = 0;
  if ( *(_WORD *)(v2 + 20) )
  {
    for ( i = (_DWORD *)(v2 + 240); *i != v4; i += 74 )
    {
      if ( ++v6 >= v3 )
        return v5;
    }
    return v6 == a2;
  }
  return v5;
}
