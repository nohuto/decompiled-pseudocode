void __fastcall CVisual::SetOffset(CVisual *this, float a2, float a3, float a4)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((float *)this + 28) != a2 || *((float *)this + 29) != a3 || *((float *)this + 30) != a4 )
  {
    *((float *)this + 28) = a2;
    *((float *)this + 29) = a3;
    *((float *)this + 30) = a4;
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v5 = a2;
    *(float *)&v5[1] = a3;
    *(float *)&v5[2] = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Bu, (const struct D2DVector3 *)v5);
    CResource::InvalidateAnimationSources(this, 0x1Bu);
  }
}
