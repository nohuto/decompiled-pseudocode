bool __fastcall CDDisplayRenderTarget::GetTreeClientBounds(CDDisplayRenderTarget *this, struct MilRectF *a2)
{
  bool result; // al

  result = 1;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 18092);
  return result;
}
