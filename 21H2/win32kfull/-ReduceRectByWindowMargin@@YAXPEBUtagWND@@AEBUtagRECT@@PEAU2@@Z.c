/*
 * XREFs of ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023F3D0
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01CFB88 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0211504 (xxxDrawDragRectEx.c)
 *     ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C023F32C (-GetWindowFrameBounds@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C003E37C (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 */

void __fastcall ReduceRectByWindowMargin(const struct tagWND *a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  struct tagRECT v3; // xmm0
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v5 = 0LL;
  *a3 = v3;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v5) )
  {
    a3->top += SWORD2(v5);
    a3->left += (__int16)v5;
    a3->right -= SWORD1(v5);
    a3->bottom -= SHIWORD(v5);
  }
}
