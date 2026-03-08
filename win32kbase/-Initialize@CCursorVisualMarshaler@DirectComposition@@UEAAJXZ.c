/*
 * XREFs of ?Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C025B440
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00ABF10 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

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
