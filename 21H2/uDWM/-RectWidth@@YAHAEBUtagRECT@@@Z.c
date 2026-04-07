/*
 * XREFs of ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x180080924
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180014BBC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800447B8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectWidth(const struct tagRECT *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = a1->right - a1->left;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  return result;
}
