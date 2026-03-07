bool __fastcall CDDARenderTarget::GetTreeClientBounds(CDDARenderTarget *this, struct MilRectF *a2)
{
  bool result; // al

  result = 1;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 132);
  return result;
}
