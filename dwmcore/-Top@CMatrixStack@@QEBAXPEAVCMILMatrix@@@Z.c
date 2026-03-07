void __fastcall CMatrixStack::Top(CMatrixStack *this, struct CMILMatrix *a2)
{
  if ( *(_DWORD *)this )
    CWatermarkStack<CMILMatrix,8,2,8>::Top(this, a2);
  else
    CMILMatrix::SetToIdentity(a2);
}
