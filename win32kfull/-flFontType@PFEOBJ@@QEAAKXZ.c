__int64 __fastcall PFEOBJ::flFontType(PFEOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  unsigned int v5; // ecx

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL);
  if ( (v2 & 1) != 0 )
    v3 = 4;
  else
    v3 = ((unsigned int)v2 >> 1) & 1;
  v4 = *(_DWORD *)(v1 + 12);
  v5 = (2 * (v4 & 1)) | v3;
  if ( v2 < 0 )
  {
    v5 |= (v2 & 0x4000 | 0x2000) << 8;
    if ( (v2 & 0x4000000) != 0 )
      v5 |= 0x100000u;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v5 |= 0x1000000u;
    if ( (v4 & 0x100) != 0 )
      v5 |= 0x800000u;
  }
  return v5;
}
