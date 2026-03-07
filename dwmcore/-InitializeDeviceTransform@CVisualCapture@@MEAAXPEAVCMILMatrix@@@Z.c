void __fastcall CVisualCapture::InitializeDeviceTransform(CVisual **this, struct CMILMatrix *a2)
{
  CVisual *v4; // rcx
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  if ( *((_BYTE *)this + 1900) )
  {
    CMILMatrix::SetToIdentity(a2);
  }
  else
  {
    CVisual::GetRootTransform(this[234], a2, 0);
    v4 = this[233];
    if ( v4 )
    {
      v6 = 0;
      CVisual::GetRootTransform(v4, (struct CMILMatrix *)v5, 0);
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v5);
    }
  }
}
