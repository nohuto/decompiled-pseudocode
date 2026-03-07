__int64 __fastcall CD2DContext::LazyInitDirectInkFactory(struct ID2D1DeviceContext **this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !this[40] )
    return CD2DGenericInk::CreateDirectInkFactory(this[25], this + 40);
  return result;
}
