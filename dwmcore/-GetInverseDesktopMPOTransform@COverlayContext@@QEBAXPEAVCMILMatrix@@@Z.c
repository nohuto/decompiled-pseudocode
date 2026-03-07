void __fastcall COverlayContext::GetInverseDesktopMPOTransform(COverlayContext *this, struct CMILMatrix *a2)
{
  float v4[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 11025) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this);
    COverlayContext::GetVirtualModeClip(this, v4);
    CMILMatrix::InferAffineMatrix(a2);
  }
  else
  {
    CMILMatrix::SetToIdentity(a2);
  }
}
