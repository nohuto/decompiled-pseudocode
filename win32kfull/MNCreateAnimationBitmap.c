/*
 * XREFs of MNCreateAnimationBitmap @ 0x1C0201E28
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall MNCreateAnimationBitmap(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx

  result = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 56LL), a2, a3, 0, 0LL, 0LL);
  v5 = result;
  if ( result )
  {
    if ( a1 == gMenuState[0] )
      GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(*(_QWORD *)(a1 + 136), v5);
    result = 1LL;
    *(_QWORD *)(a1 + 128) = v5;
  }
  return result;
}
