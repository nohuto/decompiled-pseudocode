/*
 * XREFs of ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x18003A460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

struct CVisualTree *__fastcall CBackdropVisualImage::GetVisualTree(CVisual **this)
{
  struct CVisualTree *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  CVisual::GetVisualTree(this[18], &v2, 0);
  return v2;
}
