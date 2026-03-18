/*
 * XREFs of ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x18021EF74
 * Callers:
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021EFF0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x18021F104 (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 */

char __fastcall CVisualBitmap::CanUseCVI(CVisualBitmap *this, struct CDrawingContext *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_DWORD *)a2 + 84)
    || *((_DWORD *)a2 + 85)
    || *((_DWORD *)a2 + 86)
    || (**((unsigned __int8 (__fastcall ***)(char *))a2 + 3))((char *)a2 + 24) )
  {
    return (int)CVisualBitmap::EnsureCachedVisualImage(this) >= 0;
  }
  return v2;
}
