/*
 * XREFs of LW_BrushInit @ 0x1C00F3140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 LW_BrushInit()
{
  __int64 Bitmap; // rax
  __int64 v1; // rbx
  __int64 SolidBrush; // rax

  Bitmap = GreCreateBitmap(8LL, 8LL, 1LL, 1LL, "U");
  v1 = Bitmap;
  if ( !Bitmap )
    return 0LL;
  *(_QWORD *)(gpsi + 4944LL) = GreCreatePatternBrush(Bitmap);
  ghbrWhite = GreGetStockObject(0LL);
  ghbrBlack = GreGetStockObject(4LL);
  if ( !*(_QWORD *)(gpsi + 4944LL) )
    return 0LL;
  GreDeleteObject(v1);
  GreSetBrushOwner(*(_QWORD *)(gpsi + 4944LL), 0LL);
  SolidBrush = GreCreateSolidBrush(0LL);
  ghbrHungApp = SolidBrush;
  if ( !SolidBrush )
    return 0LL;
  GreSetBrushOwner(SolidBrush, 0LL);
  return 1LL;
}
