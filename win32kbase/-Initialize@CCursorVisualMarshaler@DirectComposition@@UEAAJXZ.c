__int64 __fastcall DirectComposition::CCursorVisualMarshaler::Initialize(
        DirectComposition::CCursorVisualMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CVisualMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_BYTE *)this + 384) = 1;
  }
  return result;
}
