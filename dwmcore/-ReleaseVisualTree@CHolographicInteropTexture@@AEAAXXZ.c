/*
 * XREFs of ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1802A80EC
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A7340 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1802A8224 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x1800C6D30 (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18021B920 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseVisualTree(CHolographicInteropTexture *this)
{
  CVisualTree **v1; // rbx

  v1 = (CVisualTree **)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    CVisualTree::RemoveTreeClient(
      *v1,
      (struct IVisualTreeClient *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL)));
    ReleaseInterface<CVisualTree>((__int64 *)v1);
  }
}
