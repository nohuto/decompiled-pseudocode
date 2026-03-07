char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // si
  _DWORD *v2; // rdi
  char v4; // cl

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 22) )
    *v2 |= 0x4000u;
  if ( *((float *)this + 18) != 0.0 || *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 )
    *v2 |= 0x80u;
  if ( *((_QWORD *)this + 17) )
    *v2 |= 0x100u;
  if ( *((_QWORD *)this + 18) )
    *v2 |= 0x200u;
  if ( *((_QWORD *)this + 19) )
    *v2 |= 0x400u;
  if ( *((_QWORD *)this + 28) )
    *v2 |= 0x4000000u;
  if ( *((_QWORD *)this + 29) )
    *((_DWORD *)this + 92) |= 4u;
  if ( *((_DWORD *)this + 60) || *((_DWORD *)this + 62) || *((_DWORD *)this + 61) || *((_DWORD *)this + 63) )
    *((_DWORD *)this + 92) |= 8u;
  *((_QWORD *)this + 40) = 0LL;
  if ( *((_QWORD *)this + 42) )
    *((_DWORD *)this + 92) |= 1u;
  *((_QWORD *)this + 43) = 0LL;
  if ( *((_QWORD *)this + 45) )
    *((_DWORD *)this + 92) |= 2u;
  if ( *((_QWORD *)this + 21) )
    *v2 |= 0x800u;
  if ( *((_QWORD *)this + 20) )
    *v2 |= 0x1000u;
  v4 = *((_BYTE *)this + 312);
  if ( (v4 & 0x40) == 0 )
    *v2 |= 0x800000u;
  if ( *((_DWORD *)this + 64) != -1
    || *((_DWORD *)this + 65) != -1
    || *((_DWORD *)this + 66) != -1
    || *((_DWORD *)this + 67) != -1
    || *((_DWORD *)this + 68) != -1
    || *((_DWORD *)this + 69) != -1 )
  {
    *v2 |= 0x8000u;
  }
  if ( (v4 & 0x18) != 0 || (*((_BYTE *)this + 313) & 3) != 0 )
    *v2 |= 0x10000u;
  if ( (v4 & 0x20) != 0 )
    *v2 |= 0x20000u;
  if ( *((_DWORD *)this + 76) )
    *v2 |= 0x40000u;
  if ( (v4 & 2) != 0 )
    *v2 |= 0x80000u;
  if ( *((_QWORD *)this + 27) )
    *v2 |= 0x100000u;
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 )
    *v2 |= 0x200000u;
  if ( *((float *)this + 28) != 1.0 )
    *v2 |= 0x400000u;
  if ( *((float *)this + 23) != 0.0 || *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 )
    *v2 |= 0x1000000u;
  if ( *((float *)this + 26) != 0.0 || *((float *)this + 27) != 0.0 )
    *v2 |= 0x2000000u;
  if ( (v4 & 1) != 0 )
    *v2 |= 0x10000000u;
  if ( *((_DWORD *)this + 70) )
    *v2 |= 0x8000000u;
  if ( *((_DWORD *)this + 71) )
    *v2 |= 0x20000000u;
  if ( *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0 )
  {
    *v2 |= 0x40000000u;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*v2 & 0x7F7FDF80) != 0
    || (*((_DWORD *)this + 92) & 0xF) != 0 )
  {
    return 1;
  }
  return v1;
}
