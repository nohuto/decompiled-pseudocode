char __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CImageLegacyMilBrushMarshaler *this)
{
  char v1; // di
  int *v2; // rbx
  int v3; // eax
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax

  v1 = 0;
  v2 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 22) )
    *v2 |= 0x200u;
  if ( *((_DWORD *)this + 23) )
    *v2 |= 0x400u;
  v3 = *v2 | 0x800;
  *v2 = v3;
  if ( *((_QWORD *)this + 14) )
  {
    v3 |= 0x1000u;
    *v2 = v3;
  }
  v4 = v3 | 0x2000;
  *v2 = v4;
  if ( *((_QWORD *)this + 17) )
  {
    v4 |= 0x4000u;
    *v2 = v4;
  }
  if ( *((_DWORD *)this + 36) )
  {
    v4 |= 0x8000u;
    *v2 = v4;
  }
  if ( *((_DWORD *)this + 37) )
  {
    v4 |= 0x10000u;
    *v2 = v4;
  }
  if ( *((_DWORD *)this + 38) )
  {
    v4 |= 0x20000u;
    *v2 = v4;
  }
  if ( *((_DWORD *)this + 39) )
  {
    v4 |= 0x40000u;
    *v2 = v4;
  }
  v5 = *((float *)this + 41);
  v6 = v4 | 0x80000;
  *v2 = v6;
  if ( v5 != 0.0 )
  {
    v6 |= 0x100000u;
    *v2 = v6;
  }
  if ( *((float *)this + 42) != 0.0 )
  {
    v6 |= 0x200000u;
    *v2 = v6;
  }
  if ( *((_QWORD *)this + 22) )
    *v2 = v6 | 0x400000;
  if ( DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x7FFE00) != 0 )
    return 1;
  return v1;
}
