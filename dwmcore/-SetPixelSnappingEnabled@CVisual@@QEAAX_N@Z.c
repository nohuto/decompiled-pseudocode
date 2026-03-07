void __fastcall CVisual::SetPixelSnappingEnabled(CVisual *this, char a2)
{
  __int64 v2; // r11

  if ( *((_BYTE *)this + 101) >> 7 != a2 )
  {
    *((_BYTE *)this + 101) = (a2 << 7) | *((_BYTE *)this + 101) & 0x7F;
    CVisual::OnInnerTransformChanged(this);
    CVisual::PropagateFlags(v2, 5u);
  }
}
