void __fastcall CNineGridBrush::SetInsetProperty(CNineGridBrush *this, unsigned int a2, float a3)
{
  float *InsetFieldPointer; // rax
  CResource *v5; // rcx
  int v6; // r8d

  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( a3 != *InsetFieldPointer )
  {
    *InsetFieldPointer = a3;
    CResource::InvalidateAnimationSources(v5, v6);
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 72LL))(this, 6LL, this);
  }
}
