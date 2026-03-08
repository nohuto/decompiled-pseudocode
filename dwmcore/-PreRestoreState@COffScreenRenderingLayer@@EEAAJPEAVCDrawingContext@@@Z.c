/*
 * XREFs of ?PreRestoreState@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800E8A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderingLayer::PreRestoreState(
        COffScreenRenderingLayer *this,
        struct CDrawingContext *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 812);
  if ( v2 )
    *((_DWORD *)a2 + 812) = v2 - 1;
  return 0LL;
}
