/*
 * XREFs of ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C033A200
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C0338B70 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0338EE0 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C03395D4 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPRESENT::IntersectRect(struct tagRECT *a1, const struct tagRECT *a2, const struct tagRECT *a3)
{
  LONG left; // r10d
  LONG right; // r9d
  LONG top; // edx
  LONG bottom; // ecx

  left = a2->left;
  if ( a2->left <= a3->left )
    left = a3->left;
  a1->left = left;
  right = a2->right;
  if ( right >= a3->right )
    right = a3->right;
  a1->right = right;
  if ( left >= right )
    return 0;
  top = a2->top;
  if ( top <= a3->top )
    top = a3->top;
  a1->top = top;
  bottom = a2->bottom;
  if ( bottom >= a3->bottom )
    bottom = a3->bottom;
  a1->bottom = bottom;
  return top < bottom;
}
