BOOL __fastcall W32kCddLineTo(
        SURFOBJ *a1,
        CLIPOBJ *a2,
        BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix,
        __int64 a10)
{
  __int64 p_pvBits; // rbx
  BOOL result; // eax

  p_pvBits = (__int64)&a1[7].pvBits;
  if ( !a1 )
    p_pvBits = 632LL;
  *(_QWORD *)p_pvBits = a10;
  result = EngLineTo(a1, a2, a3, a4, y1, x2, y2, prclBounds, mix);
  *(_QWORD *)p_pvBits = 0LL;
  return result;
}
