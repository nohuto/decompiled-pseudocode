char __fastcall DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CGradientBrushMarshaler *this)
{
  if ( *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 27) = 0;
  }
  *((_DWORD *)this + 4) |= 0x2E0u;
  return 1;
}
