void __fastcall CNineGridBrush::SetCanUseSurfaceTransform(CNineGridBrush *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 153) != 1 )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 153) = 1;
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v1 + 72))(this, 6LL, this);
  }
}
