CViewBox *__fastcall CViewBox::CViewBox(CViewBox *this, struct CComposition *a2)
{
  CViewBox *v2; // rcx
  CViewBox *result; // rax

  CComponentTransform2D::CComponentTransform2D(this, a2);
  *(_QWORD *)v2 = &CViewBox::`vftable';
  *((_DWORD *)v2 + 60) = 1056964608;
  *((_DWORD *)v2 + 61) = 1056964608;
  result = v2;
  *((_DWORD *)v2 + 62) = 2;
  return result;
}
