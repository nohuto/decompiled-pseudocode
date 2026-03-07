char __fastcall CSynchronousSuperWetInk::IsSuperWetCompatible(
        CSynchronousSuperWetInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        char a4)
{
  if ( a4 )
    return 0;
  else
    return CSynchronousSuperWetInk::IsSuperWetCompatible(this);
}
