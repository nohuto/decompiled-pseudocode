EXFORMOBJ *__fastcall EXFORMOBJ::EXFORMOBJ(EXFORMOBJ *this, struct MATRIX *a2, int a3)
{
  *((_DWORD *)this + 3) = 0;
  *(_QWORD *)this = a2;
  if ( (a3 & 1) != 0 )
  {
    EXFORMOBJ::vComputeAccelFlags(this, a3 & 0x38);
  }
  else if ( (a3 & 0x38) != 0 )
  {
    *((_DWORD *)a2 + 8) = a3;
  }
  return this;
}
