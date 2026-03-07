char __fastcall CRectanglesShape::IsEmpty(CRectanglesShape *this)
{
  int v1; // r8d
  char v2; // dl
  float *v3; // rax

  v1 = *((_DWORD *)this + 10);
  v2 = 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    v3 = (float *)*((_QWORD *)this + 2);
    if ( v3[2] > *v3 && v3[3] > v3[1] )
      return 0;
  }
  return v2;
}
